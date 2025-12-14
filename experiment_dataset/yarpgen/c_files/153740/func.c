/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153740
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1 - 2] [i_2] [3LL] &= ((((((5186429317289262116ULL) & (((/* implicit */unsigned long long int) 255)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 390248178U)) != (13260314756420289499ULL))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46380))) > (961977815738478510ULL)))), ((unsigned short)19156))))));
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (unsigned short)37966))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */long long int) 6480730136934477243ULL);
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((((((0ULL) | (((/* implicit */unsigned long long int) 2196875771904LL)))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (5186429317289262110ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)165)) <= (((/* implicit */int) (short)-32760))))) * (((/* implicit */int) ((961977815738478510ULL) <= (((/* implicit */unsigned long long int) -1595846806)))))))))))));
                    }
                    for (long long int i_4 = 2; i_4 < 22; i_4 += 1) 
                    {
                        arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((max((5186429317289262116ULL), (((/* implicit */unsigned long long int) 2432671203U)))) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)139))) ^ (-2263561210588189560LL)))))) & (((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)19139))))) & (18446744073709551615ULL)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            arr_19 [i_0] [i_2] [i_1] [i_1] |= ((/* implicit */int) (_Bool)1);
                            arr_20 [19LL] [i_2] [i_2] [19LL] = ((/* implicit */unsigned short) ((6998939477092872329LL) << (((((/* implicit */int) ((((/* implicit */unsigned long long int) -3279279702548436867LL)) <= (18446744073709551615ULL)))) - (1)))));
                        }
                        arr_21 [10U] [10U] [21U] [i_2] [i_4 + 1] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)40206)) ^ (((/* implicit */int) (unsigned short)25329))))) | (((3810159472084880290LL) ^ (((/* implicit */long long int) 0U)))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) max((604691386), (((/* implicit */int) (short)-32750))))) != (2113929216U)))))));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33608))) ^ (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)160)) | (966562228)))), (min((((/* implicit */unsigned int) (short)-841)), (1135139664U)))))));
                        arr_22 [i_0] [22] [i_2] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)116))));
                    }
                    for (int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((max((((2106061099193995576LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (unsigned short)0)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)19139)) / (((/* implicit */int) (short)-32750))))))))));
                        var_17 = ((((/* implicit */unsigned int) 4095)) + (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (2113929216U))) | (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)29789)), (351921027)))))));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)144)) && (((/* implicit */_Bool) 0ULL))))), (min((((/* implicit */unsigned long long int) (unsigned short)19139)), (18446744073709551591ULL)))))) && (((/* implicit */_Bool) min(((unsigned char)139), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -2719467481015710593LL)) || (((/* implicit */_Bool) (short)-32760)))))))))))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (0ULL)));
                    }
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) 3032547029057866422LL))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (short)-4663);
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((max((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)0)), (759797787U)))), (((((/* implicit */long long int) ((/* implicit */int) (short)18284))) + (-5830816890513318891LL))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)8371)))))))));
}
