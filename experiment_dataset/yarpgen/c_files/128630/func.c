/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128630
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_3] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                            var_15 = ((/* implicit */_Bool) min((max((((unsigned short) (_Bool)1)), (((/* implicit */unsigned short) (signed char)115)))), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), (min(((unsigned char)255), ((unsigned char)237))))))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)27)) && (((/* implicit */_Bool) ((4226113809U) >> (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 15; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((unsigned long long int) ((short) 1327166060)));
                            var_18 = ((/* implicit */unsigned int) 2699052657882405989LL);
                            var_19 = ((/* implicit */short) ((unsigned int) min((((/* implicit */unsigned int) (short)-613)), (min((((/* implicit */unsigned int) (short)16256)), (3211036633U))))));
                            arr_16 [i_5] = ((/* implicit */short) 9389398548317859622ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) min(((short)-16246), ((short)-31662)))));
    var_21 = ((/* implicit */unsigned short) var_12);
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(68853487U))) - (((/* implicit */unsigned int) (+(((/* implicit */int) (short)8191)))))))) && (((/* implicit */_Bool) (short)-1))));
    /* LoopNest 3 */
    for (unsigned short i_6 = 2; i_6 < 21; i_6 += 3) 
    {
        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                {
                    arr_27 [i_7] [i_7] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)202))))) - (((((/* implicit */long long int) ((/* implicit */int) (short)25711))) / (9223372036854775801LL))))) >= (((/* implicit */long long int) ((/* implicit */int) (((-(401651888U))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26606)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            {
                                arr_33 [i_9] = ((short) 671742704U);
                                var_23 += ((/* implicit */short) ((68853512U) < (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)49))))) >> (((((/* implicit */int) min(((unsigned short)9219), (((/* implicit */unsigned short) (short)8198))))) - (8178))))))));
                                arr_34 [i_9] [i_10] [i_9] [i_8] [i_7] [i_9] = ((/* implicit */unsigned short) min((((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)45)) || (((/* implicit */_Bool) 4226113821U))))), (((/* implicit */unsigned long long int) 4057956771U))));
                                arr_35 [i_8] [i_9] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) ((unsigned short) 296083595));
                            }
                        } 
                    } 
                    var_24 = (unsigned char)215;
                    arr_36 [i_6] [i_7] [i_7] [i_8] = ((/* implicit */unsigned int) (signed char)-28);
                }
            } 
        } 
    } 
}
