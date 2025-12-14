/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155002
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
    var_12 = ((/* implicit */signed char) (short)20176);
    var_13 = ((((/* implicit */_Bool) (~(max((10717980604227827042ULL), (14304460870542060110ULL)))))) ? (var_10) : (((((/* implicit */_Bool) min((2849518603686494710ULL), (((/* implicit */unsigned long long int) (short)12490))))) ? (max((var_8), (15591984375159154497ULL))) : (((/* implicit */unsigned long long int) 1279640875)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [i_1 + 2] [i_2] [i_3] = ((var_11) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)12462))))));
                            arr_12 [i_0 + 2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (-(4296896498464631116ULL)))))) >= (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68))) * (arr_0 [i_2] [i_3]))) / (9740934282948386663ULL)))));
                            var_14 = 25ULL;
                            var_15 = ((/* implicit */unsigned short) max((14750235510535187994ULL), (max((((arr_0 [i_0] [i_0 - 2]) * (4605351604016276046ULL))), ((+(var_9)))))));
                        }
                    } 
                } 
                var_16 = min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 18446744073709551615ULL)))) % (((unsigned long long int) 10117728460703214973ULL)))), (((((/* implicit */unsigned long long int) -1379477472)) + ((-(13584981116137527930ULL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            {
                arr_17 [i_4] = ((unsigned long long int) min((arr_14 [i_4]), (11397910439593790406ULL)));
                var_17 = min((((((/* implicit */_Bool) ((unsigned long long int) (short)-20176))) ? (((((/* implicit */_Bool) 1972109650)) ? (8725517398469888173ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4]))))) : (((unsigned long long int) (signed char)-79)))), (1906857354606261542ULL));
            }
        } 
    } 
}
