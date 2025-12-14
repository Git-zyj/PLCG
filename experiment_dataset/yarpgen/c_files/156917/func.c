/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156917
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (-((~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0]))))))))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((((_Bool)0) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) ? (max((((((/* implicit */_Bool) arr_2 [i_0])) ? (7916818280846998630LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) (~(((/* implicit */int) var_8))))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) arr_2 [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (short i_3 = 4; i_3 < 9; i_3 += 2) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_13 *= var_9;
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (((unsigned long long int) var_3))))))));
                            var_15 = ((/* implicit */_Bool) var_10);
                            arr_19 [(signed char)3] [i_4] [i_3] [(unsigned char)5] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_2] [(short)3] [i_2]))));
                        }
                        for (short i_6 = 2; i_6 < 10; i_6 += 4) 
                        {
                            arr_22 [i_4] = min((((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) var_0)))), (((((((/* implicit */_Bool) 4272097691U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_20 [4LL] [(_Bool)1] [i_3 + 1] [(unsigned char)0] [(short)3] [i_6 - 2])))) >= (((/* implicit */int) ((-7916818280846998630LL) != (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                            var_16 = (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_15 [i_4 - 1] [i_4 - 1] [(short)7] [i_3] [i_3] [(short)5])) : (((/* implicit */int) (unsigned char)255)))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_17 |= (unsigned char)12;
                            arr_25 [(short)9] [i_4] [i_3 - 4] [(unsigned char)1] [i_3 - 3] [(_Bool)1] = -7916818280846998616LL;
                            arr_26 [i_4] [i_2] [i_3 - 3] [i_4] = ((/* implicit */short) ((_Bool) (+(var_2))));
                            var_18 = ((/* implicit */int) arr_24 [i_3 - 4] [i_3 + 1]);
                            var_19 &= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_10 [i_4 - 1] [i_4] [i_7])) / (((/* implicit */int) arr_21 [i_3] [i_3] [i_4 - 1] [i_4 - 1])))));
                        }
                        var_20 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)249)) << (((((/* implicit */int) var_10)) + (2288))))) << ((((~(((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1] [i_3 + 1])))) - (20811)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 3; i_8 < 9; i_8 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((unsigned int) 22869604U));
                            arr_30 [i_4] [i_4] [i_3] [i_3 + 2] [i_8] = ((/* implicit */unsigned char) max((var_6), ((_Bool)1)));
                            var_22 ^= ((/* implicit */unsigned char) arr_14 [i_4 - 1] [i_4] [i_3] [i_3 - 3]);
                            var_23 = ((/* implicit */_Bool) ((var_7) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_21 [i_4] [i_2] [i_3] [8LL])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)255)))) : ((-(var_4))))) : (((/* implicit */int) var_8))));
                        }
                        for (signed char i_9 = 2; i_9 < 9; i_9 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned char) var_9);
                            var_25 -= ((/* implicit */short) ((int) min((((((/* implicit */_Bool) (unsigned char)0)) ? (arr_18 [(signed char)0] [(signed char)5] [(short)7] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(unsigned char)8])) ? (((/* implicit */int) arr_21 [i_3] [i_2] [i_4] [i_9])) : (((/* implicit */int) var_0))))))));
                            var_26 |= ((/* implicit */int) max((((arr_23 [i_1] [i_2] [i_3] [i_3] [(unsigned char)2] [(_Bool)1] [i_9]) ? (((/* implicit */long long int) ((/* implicit */int) ((-5378857280987783534LL) < (((/* implicit */long long int) ((/* implicit */int) (short)19580))))))) : (arr_18 [i_9] [(_Bool)1] [i_1] [i_1]))), (7916818280846998630LL)));
                        }
                    }
                } 
            } 
        } 
        var_27 -= ((/* implicit */short) (~(((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned char)10] [(_Bool)1])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [(_Bool)1]))))));
    }
    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) 
    {
        arr_37 [i_10] = ((/* implicit */long long int) ((var_3) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_10] [i_10])) != (((/* implicit */int) arr_0 [i_10] [i_10]))))) : ((~(((/* implicit */int) (short)-19577))))));
        arr_38 [i_10] = ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)19576))))) ? (1675880826U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)4095))))))) / (((/* implicit */unsigned int) ((int) ((((/* implicit */int) arr_2 [i_10])) << (((((/* implicit */int) var_0)) - (19539))))))));
        var_28 = ((/* implicit */unsigned char) max((((/* implicit */signed char) ((((/* implicit */int) ((short) var_3))) <= (((/* implicit */int) var_1))))), (arr_0 [i_10] [i_10])));
        arr_39 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_10] [i_10]))))) ? (((/* implicit */int) (short)19558)) : (((((/* implicit */_Bool) arr_36 [i_10])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) && (var_3)))) : (((/* implicit */int) max((arr_35 [i_10] [i_10]), ((unsigned char)244))))))));
    }
    var_29 = ((/* implicit */long long int) var_9);
    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (((+(((/* implicit */int) var_7)))) | (((((/* implicit */int) var_0)) ^ (((/* implicit */int) (unsigned char)21)))))))));
}
