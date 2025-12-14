/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174282
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
    var_20 *= (+(min(((+(var_2))), (((/* implicit */unsigned int) max((var_7), (((/* implicit */int) var_15))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) -1378591281391263779LL);
        var_22 = ((/* implicit */int) var_0);
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) min((arr_6 [i_2 + 2] [i_2 + 2]), (((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1]))) ^ (var_4))))))));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_9 [i_3] [i_1] [i_1] [i_1])))), (1718770879)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_1])), (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 + 1] [i_1] [i_2 - 1] [i_2 + 1]))) : (min((var_19), (((/* implicit */unsigned long long int) 121678701)))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            var_25 = ((/* implicit */short) ((6413515451123056751ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)193)))));
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((var_14) > (((/* implicit */unsigned long long int) arr_6 [i_4] [i_4])))))));
        }
    }
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 4; i_7 < 12; i_7 += 4) 
            {
                {
                    var_27 = ((/* implicit */long long int) (+(((max((((/* implicit */unsigned int) arr_20 [i_5])), (var_0))) + (((/* implicit */unsigned int) (+(((/* implicit */int) var_18)))))))));
                    var_28 = (+(var_2));
                    arr_21 [i_6] [i_5] = ((/* implicit */_Bool) arr_2 [i_5]);
                }
            } 
        } 
    } 
}
