/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113850
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
    var_20 |= (unsigned short)57661;
    var_21 = ((/* implicit */unsigned char) 98304);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_22 ^= ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */int) ((unsigned short) var_12));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 - 1])) << (((((/* implicit */int) arr_4 [i_1 - 1])) - (50)))));
                    var_24 = ((/* implicit */unsigned char) arr_8 [i_1] [i_1] [16]);
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_17 [i_1] [i_1] [(_Bool)1] = ((arr_13 [i_1] [i_0] [i_1 - 1]) ? (var_8) : (((/* implicit */unsigned long long int) var_15)));
                        var_25 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_6 [i_1 - 1] [i_4]))))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((int) (unsigned short)57661)))));
                    }
                    var_27 ^= ((/* implicit */unsigned short) ((((int) var_2)) + (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 3; i_7 < 17; i_7 += 1) 
                        {
                            {
                                arr_25 [(unsigned short)13] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)24576))));
                                var_28 |= ((/* implicit */_Bool) var_3);
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_0])) % (((var_14) ? (max((((/* implicit */int) arr_2 [i_0])), (var_15))) : (1292690876)))));
                    var_30 ^= ((/* implicit */unsigned short) min(((+(((var_10) ? (var_11) : (arr_22 [(_Bool)0] [(_Bool)0] [(_Bool)0] [i_5]))))), (((/* implicit */int) var_13))));
                    arr_26 [i_1] [(unsigned char)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) ((unsigned char) (unsigned short)25430))) : (((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [i_1])) >= (((/* implicit */int) var_18)))))))) ? (((((/* implicit */int) (unsigned char)150)) & (((/* implicit */int) var_6)))) : (((/* implicit */int) var_12))));
                }
                arr_27 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 294611305)) ? (var_0) : (((/* implicit */int) (unsigned char)237))))) : (((unsigned long long int) var_11)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0])))));
            }
        } 
    } 
    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_15) : (((((/* implicit */_Bool) 9540735510991154467ULL)) ? (((/* implicit */int) ((_Bool) var_14))) : (max((var_11), (((/* implicit */int) (unsigned short)19235))))))));
}
