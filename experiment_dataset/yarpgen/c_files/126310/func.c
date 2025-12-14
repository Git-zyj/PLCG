/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126310
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
    var_13 = ((/* implicit */short) ((unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_2)) : (var_5))) > (var_5))));
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((min((min((var_2), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) (unsigned short)24792)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
                    {
                        var_15 *= ((/* implicit */int) (!(((/* implicit */_Bool) min((max((var_3), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (arr_3 [(_Bool)1])))))))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_1 [7U])) <= ((-(var_7)))));
                        arr_10 [(unsigned short)10] [i_3] [i_3] [0ULL] &= ((/* implicit */unsigned int) var_3);
                    }
                    for (int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_2 [(unsigned char)0] [8ULL] [8ULL]))) ^ (((/* implicit */int) var_0)))))));
                        var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? ((-(min((arr_3 [11LL]), (((/* implicit */unsigned int) var_6)))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)31)))))));
                        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)40740))))), (max((var_11), (arr_0 [(unsigned char)1]))))))));
                        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
                    }
                    var_21 = ((/* implicit */unsigned char) var_8);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((((/* implicit */_Bool) var_2)) ? (max((var_2), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))))), (((/* implicit */unsigned int) ((unsigned char) ((unsigned char) var_9)))))))));
}
