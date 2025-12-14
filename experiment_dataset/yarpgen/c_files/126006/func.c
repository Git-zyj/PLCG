/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126006
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
    var_14 += ((/* implicit */unsigned int) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) max((var_15), (min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 2])) || (((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1])))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_1] [i_3 - 2] [i_0] [i_3] [i_3 - 2] [i_2] = ((/* implicit */_Bool) (+(-1456277065795813177LL)));
                            var_16 *= ((/* implicit */short) ((arr_2 [i_1 - 2]) | (((((/* implicit */unsigned long long int) arr_4 [i_4 + 1] [i_4 + 1] [i_2 - 2])) & (arr_2 [i_1 + 2])))));
                            var_17 ^= ((/* implicit */unsigned char) min(((-(13175398462220386606ULL))), (((/* implicit */unsigned long long int) (unsigned char)161))));
                            arr_15 [i_1] [i_1] [i_1] = ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))));
                        }
                        var_18 = 1456277065795813176LL;
                        var_19 = (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (-(1888803363U)))) >= (arr_11 [i_0] [i_1 - 1] [i_3 + 1] [i_3] [i_3])))));
                        var_20 ^= ((/* implicit */int) (unsigned short)49122);
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_0))));
    var_22 = var_1;
    var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)164)))))))), ((unsigned short)26229)));
}
