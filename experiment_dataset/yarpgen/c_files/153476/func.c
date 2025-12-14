/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153476
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        arr_10 [i_0] = ((/* implicit */signed char) ((3137314822631788585LL) % (((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) & (3137314822631788585LL)))));
                        arr_11 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)102))) || (((/* implicit */_Bool) arr_7 [i_0] [i_0]))));
                        arr_12 [i_0] [i_3] [i_3] [(unsigned char)12] = ((/* implicit */_Bool) -3137314822631788585LL);
                    }
                    for (short i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) ((unsigned char) (-2147483647 - 1)))), (((-3137314822631788585LL) & (((/* implicit */long long int) ((/* implicit */int) (short)0))))))), (((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) ^ (arr_14 [i_4] [i_2] [i_2] [i_2] [i_1] [(unsigned short)3]))))))));
                        var_20 ^= ((/* implicit */unsigned short) arr_6 [11U] [i_4] [i_4] [i_4]);
                        var_21 = ((/* implicit */int) max((3137314822631788585LL), (((/* implicit */long long int) max(((unsigned short)17), (((/* implicit */unsigned short) arr_5 [i_0])))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) 2412632007448762331LL);
                        var_23 += (+(((/* implicit */int) ((((/* implicit */int) arr_2 [(_Bool)1])) < (207233490)))));
                        var_24 = ((/* implicit */unsigned char) (unsigned short)65532);
                        var_25 = ((((((/* implicit */_Bool) (short)3)) ? (3137314822631788584LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-18732))))) ^ (((/* implicit */long long int) ((/* implicit */int) (short)8160))));
                    }
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) -2412632007448762341LL))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_10))));
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? ((-(max((7412075746966412971LL), (3137314822631788569LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((((signed char) (unsigned short)57531)), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) > (-2412632007448762335LL))))))))));
    var_29 = ((/* implicit */short) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((var_18) > (((/* implicit */unsigned long long int) -2412632007448762323LL))))) : (((/* implicit */int) (unsigned short)57521))))));
    var_30 = max((((/* implicit */long long int) var_1)), (max((((/* implicit */long long int) ((unsigned short) var_18))), (-3137314822631788573LL))));
}
