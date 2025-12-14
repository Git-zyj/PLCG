/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131003
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
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) 70348470))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_15 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) -1416689412368173801LL)), (12717264268248064421ULL))), (((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) -813938478)))))));
            var_16 *= ((/* implicit */unsigned short) (((((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) | (((1334924758760419927LL) >> (((129024) - (128983)))))));
            var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((813938477) == (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) != (813938476))))))) >= (((/* implicit */int) ((3703893118190675853LL) >= ((-9223372036854775807LL - 1LL)))))));
        }
        for (short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                arr_10 [i_2] = ((/* implicit */unsigned char) ((18U) - (((/* implicit */unsigned int) 2147483647))));
                var_18 *= 10ULL;
            }
            var_19 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (unsigned short)26579)), (9223372036854775788LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)0)), (2501217562U))))));
            var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46698))) > (72040001851883520LL)))), (min((((/* implicit */unsigned long long int) -7750436406931083861LL)), (0ULL)))));
        }
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */int) (unsigned char)156)), (-872358968)))), (((min((1416689412368173800LL), (((/* implicit */long long int) (unsigned short)56175)))) & (((/* implicit */long long int) ((/* implicit */int) (short)32759)))))));
            arr_14 [i_0] [i_4] = ((/* implicit */unsigned short) min((min((3773999508334756061ULL), (((/* implicit */unsigned long long int) (unsigned short)40015)))), (((/* implicit */unsigned long long int) min((-9223372036854775807LL), (((/* implicit */long long int) (short)-32743)))))));
        }
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) max((((9223372036854775793LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43427))))), (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (-813938478))))));
        var_21 *= ((/* implicit */unsigned int) max(((unsigned short)11547), (((/* implicit */unsigned short) (short)-19))));
    }
    for (int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 9; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 2) 
            {
                {
                    var_22 *= ((/* implicit */unsigned short) min((4294967293U), (((/* implicit */unsigned int) (short)21873))));
                    arr_25 [i_5] [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */unsigned short) max(((short)25237), (((/* implicit */short) (unsigned char)119))))), ((unsigned short)29402)))), (((((/* implicit */int) min((((/* implicit */unsigned short) (short)10881)), ((unsigned short)36156)))) + (((/* implicit */int) ((((/* implicit */int) (unsigned char)15)) >= (813938498))))))));
                    arr_26 [i_5] [i_6] [(unsigned char)8] [i_7] = (unsigned char)15;
                }
            } 
        } 
        arr_27 [9ULL] = ((/* implicit */short) (unsigned short)36156);
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)31)), (min((((/* implicit */unsigned short) (unsigned char)149)), ((unsigned short)63221))))))) / (max((8862252749214981868ULL), (((/* implicit */unsigned long long int) (unsigned short)65530)))))))));
    }
}
