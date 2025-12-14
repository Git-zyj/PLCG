/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115039
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (1073479680U) : (3221487617U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -5303525381661981185LL))))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    arr_9 [i_2] [i_2] [i_2] = min((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_8 [i_0] [i_1])), ((short)452)))), ((~(8720887424907442926ULL))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                }
                var_20 = ((/* implicit */signed char) (_Bool)1);
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) 13543210883186523311ULL)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (signed char)115)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */long long int) (unsigned char)207))));
    var_23 *= ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                {
                    arr_18 [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (-3452521290300587623LL)));
                    arr_19 [i_4] [i_4] [i_4 + 1] [i_3] = ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */unsigned long long int) (-(var_11)))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-11947)) : (((/* implicit */int) (short)-3044))))) ? (((/* implicit */unsigned long long int) arr_15 [i_4 + 1])) : (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1]))) : (9725856648802108699ULL))))));
                    var_24 = ((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_4])) || (((/* implicit */_Bool) arr_13 [i_4 + 1] [i_3])));
                }
            } 
        } 
    } 
    var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) 8720887424907442914ULL)) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (min((3804372593196296876ULL), (((/* implicit */unsigned long long int) var_11))))))));
}
