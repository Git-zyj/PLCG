/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177478
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
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (~((-(arr_3 [i_0 + 2])))));
                        var_10 = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1871849541)) ? (((/* implicit */int) (unsigned short)12385)) : (((/* implicit */int) (_Bool)1))))) : (min((10595480269034286668ULL), (((/* implicit */unsigned long long int) -535893704))))))));
                    }
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [(unsigned char)1] [i_1] [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (max((var_4), (((/* implicit */unsigned long long int) (unsigned short)53150)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3732755080807702635ULL)) ? (911478693) : (((/* implicit */int) var_9))))))))));
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (+((-(((((/* implicit */_Bool) -1871849518)) ? (((/* implicit */unsigned int) 477403414)) : (0U))))))))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(signed char)4] [i_2]))) + (var_0)))) || (((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) var_4)) ? (5285026184770498712ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2)))))))))));
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((3732755080807702635ULL) % (((((/* implicit */_Bool) (-(7855105341343210104ULL)))) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) -911478693)) : (4503599627370495ULL))) : (((/* implicit */unsigned long long int) min((arr_15 [i_4] [i_4]), (((/* implicit */int) var_1)))))))));
                    var_16 += ((/* implicit */signed char) arr_7 [i_5]);
                    arr_19 [i_4] [i_5] [i_4] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_3))))));
                    var_17 += ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(2628047824U)))) / (arr_5 [i_5])));
                    var_18 = ((/* implicit */unsigned short) var_2);
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */unsigned short) var_7);
}
