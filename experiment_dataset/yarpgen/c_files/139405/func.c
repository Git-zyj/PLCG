/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139405
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
    var_20 = ((/* implicit */short) (+(max((((long long int) (unsigned char)181)), (((/* implicit */long long int) var_3))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
                            var_22 |= ((/* implicit */unsigned short) (+(((unsigned int) arr_3 [3LL] [3LL] [i_2 + 1]))));
                            arr_9 [i_0] [i_0] [18] [18ULL] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_16)) ? (min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_2])), (4291408357616303399ULL))) : (max((((/* implicit */unsigned long long int) var_3)), (var_9))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) arr_1 [i_0]))))) - (((((/* implicit */_Bool) var_7)) ? (-9046594003037247014LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0))))))) & ((+((+(var_8)))))));
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                {
                    arr_12 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1]))))), (((unsigned short) (unsigned char)4))));
                    arr_13 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)57))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)144))))))))) | (max((((/* implicit */unsigned long long int) arr_5 [i_4] [i_0] [i_0] [i_0 + 1])), (min((((/* implicit */unsigned long long int) var_11)), (var_5)))))));
                }
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)31468)) * (((/* implicit */int) (signed char)-57))));
                    var_25 = ((/* implicit */short) var_10);
                    var_26 = ((/* implicit */signed char) var_19);
                }
                for (unsigned char i_6 = 1; i_6 < 17; i_6 += 3) 
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), (((max((((/* implicit */unsigned long long int) (_Bool)1)), (2371665393825784150ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)16])))))));
                    var_28 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((var_19) + (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) != (5775401929534696550LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((var_9) >> (((var_3) - (1560408694U)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((4LL) > (143552238122434560LL))))) : ((+(arr_11 [i_6 + 1] [i_0] [i_0] [i_0])))))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */int) var_5);
    var_30 = ((/* implicit */long long int) (~(max((var_19), (((/* implicit */unsigned int) ((2447675517636069666LL) > (((/* implicit */long long int) ((/* implicit */int) var_15))))))))));
}
