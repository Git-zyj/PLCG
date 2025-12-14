/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149771
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [8LL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1268095811U)) && (((/* implicit */_Bool) -8305932717022729339LL))));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [8U])))) << (((((8305932717022729338LL) << (((8305932717022729338LL) - (8305932717022729338LL))))) - (8305932717022729329LL)))))) <= (((3272618788U) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))))))))));
        var_17 = ((/* implicit */int) ((((/* implicit */long long int) ((1769561437) + (-155320619)))) ^ (((var_14) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (-6873295761453327570LL)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] |= ((/* implicit */signed char) ((_Bool) min((((-8305932717022729339LL) / (((/* implicit */long long int) -274092408)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65535))))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)212)) > (((/* implicit */int) (unsigned char)212))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_5 [i_1] [i_1]), (((/* implicit */short) var_5))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_1] [i_1])))) : (((((/* implicit */int) var_5)) | (((/* implicit */int) arr_5 [i_1] [i_1]))))));
    }
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (long long int i_4 = 3; i_4 < 21; i_4 += 4) 
            {
                {
                    arr_18 [i_4] [i_2] [i_3] [i_2] = max((((/* implicit */long long int) ((((/* implicit */_Bool) 1022348507U)) ? (((/* implicit */int) arr_16 [i_2] [i_3] [i_2] [i_4 - 3])) : (((/* implicit */int) arr_16 [i_2] [i_3] [i_4] [i_4 + 2]))))), ((-(8305932717022729340LL))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (unsigned char)38))));
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) (-(18446744073709551596ULL)));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(min((-8305932717022729339LL), (((/* implicit */long long int) (unsigned short)65024))))))) == (((var_2) >> ((((-(((/* implicit */int) var_3)))) + (16656)))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */int) (unsigned short)7845)) <= (((/* implicit */int) arr_13 [i_2] [i_3]))))) * (((/* implicit */int) ((-1) > (((/* implicit */int) var_11))))))) | (((/* implicit */int) ((((((/* implicit */_Bool) 256721013)) ? (((/* implicit */long long int) arr_24 [22LL] [22LL] [i_4] [22LL])) : (-8305932717022729335LL))) == (((/* implicit */long long int) ((/* implicit */int) ((var_12) != (((/* implicit */long long int) ((/* implicit */int) var_9))))))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 3) 
                        {
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (unsigned short)42583))));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_13 [i_2] [i_4 - 3])))))) == (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (1972672331U))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */int) (signed char)15)) != (((((/* implicit */int) (_Bool)0)) | (-10)))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_4] [i_4] [i_4 - 3] [i_4 - 1])) << (((((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [i_4 - 1])) - (35108)))));
                    }
                }
            } 
        } 
    } 
}
