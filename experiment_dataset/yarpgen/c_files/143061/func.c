/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143061
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
    var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(var_2)))))) || (((/* implicit */_Bool) max((((/* implicit */int) (signed char)-4)), ((-2147483647 - 1)))))));
    var_13 = ((/* implicit */unsigned short) ((short) 3062902445U));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_14 += (unsigned short)65528;
        arr_2 [i_0] = ((((/* implicit */_Bool) (+(var_8)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_1 [i_0])))) : (var_8));
    }
    for (unsigned int i_1 = 4; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_7 [i_2] [i_1] [i_1] = ((/* implicit */int) arr_3 [i_1]);
            arr_8 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) ((unsigned short) (-2147483647 - 1))))));
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (-(8286186754147544497ULL))))));
        }
        for (unsigned short i_3 = 3; i_3 < 23; i_3 += 1) 
        {
            arr_11 [(signed char)16] [(unsigned short)7] = min((((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) -13LL))))), (((-686710182) | (((/* implicit */int) (unsigned short)65511))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-54)), (835702555U)))) ? (min((arr_5 [20ULL] [i_3 - 2] [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_1])))) : (((/* implicit */unsigned long long int) ((arr_6 [i_3 - 3] [i_1] [i_1]) ? (((/* implicit */int) (unsigned short)17584)) : (((/* implicit */int) (signed char)-75))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                arr_14 [i_3] [i_3] [i_1] = 1306965546;
                var_16 = ((/* implicit */int) arr_4 [i_1]);
            }
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) 8201972909403448049ULL)) ? (11169523716148181926ULL) : (((/* implicit */unsigned long long int) 2043384901U)))))));
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (min((((/* implicit */unsigned long long int) arr_10 [i_1])), (min((2093488843955827439ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-58)))))))))));
        }
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            arr_17 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) -70821479);
            var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_10) * (835702525U)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) % (((/* implicit */unsigned long long int) var_8))));
            /* LoopSeq 2 */
            for (unsigned int i_6 = 3; i_6 < 23; i_6 += 4) 
            {
                var_20 = max((((/* implicit */unsigned int) (_Bool)1)), (0U));
                var_21 = (i_5 % 2 == 0) ? (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((var_1) << (((((/* implicit */int) arr_19 [i_5] [(unsigned short)14] [i_5])) - (64255)))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6))))), (((((/* implicit */_Bool) ((unsigned int) var_6))) ? (arr_5 [i_1] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65511)) * (((/* implicit */int) (signed char)-116)))))))))) : (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((var_1) << (((((((((/* implicit */int) arr_19 [i_5] [(unsigned short)14] [i_5])) - (64255))) + (373))) - (15)))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6))))), (((((/* implicit */_Bool) ((unsigned int) var_6))) ? (arr_5 [i_1] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65511)) * (((/* implicit */int) (signed char)-116))))))))));
            }
            for (unsigned char i_7 = 4; i_7 < 23; i_7 += 4) 
            {
                var_22 = ((/* implicit */unsigned char) arr_4 [i_7]);
                var_23 = var_11;
            }
        }
        var_24 = ((/* implicit */unsigned short) 3921320304U);
    }
}
