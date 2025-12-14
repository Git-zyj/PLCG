/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139463
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [(short)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(701413903U)))) ? (((((/* implicit */_Bool) (+(4241877764U)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)212)), (arr_3 [i_0] [i_1] [i_0])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22395))) * (12473759153309419465ULL))))) : (((/* implicit */unsigned long long int) max((((701413903U) - (2625481128U))), (((/* implicit */unsigned int) (-2147483647 - 1))))))));
                var_19 = ((/* implicit */short) (+(((int) 2147483647))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_2 = 2; i_2 < 21; i_2 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((3593553398U), (((/* implicit */unsigned int) arr_7 [i_2]))))) ? (((/* implicit */int) max((arr_6 [i_2]), (((/* implicit */unsigned short) (short)-8567))))) : (((/* implicit */int) ((unsigned short) 2147483647)))))) >= (2710160225U)));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_2])) ? (((long long int) 2625481128U)) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-30355)) != (2147483647)))))));
        var_21 = ((/* implicit */unsigned int) max((((unsigned long long int) max((((/* implicit */long long int) (signed char)-110)), ((-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) max((4060827781U), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-22399))))))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] = (short)7542;
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_3 - 2])) | (((/* implicit */int) (unsigned char)237))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
        {
            arr_17 [i_3] = ((/* implicit */unsigned int) (short)22382);
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((short) (unsigned short)32014)))));
        }
        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)215)) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32022))) != (3593553376U))))));
            arr_20 [13U] [i_5] [i_5] |= (unsigned char)0;
            arr_21 [i_3 - 2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_3 + 1])) ? (((/* implicit */int) arr_10 [i_3 - 2])) : (((/* implicit */int) arr_19 [i_3 - 2]))));
        }
    }
    /* vectorizable */
    for (unsigned int i_6 = 2; i_6 < 21; i_6 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-32765)) | (((/* implicit */int) (short)22420))))) ? (((/* implicit */int) (short)-8327)) : (((/* implicit */int) arr_12 [i_6 - 2]))));
        arr_25 [i_6] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_6])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)129))) - (1199703003U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_6 + 1])))));
        var_25 = ((/* implicit */long long int) (short)22420);
        var_26 ^= ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_6])) ? (((/* implicit */int) (unsigned short)37445)) : (((/* implicit */int) (unsigned short)65525)))) != (((/* implicit */int) ((short) (unsigned short)40692)))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 1; i_7 < 10; i_7 += 2) 
    {
        arr_29 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned short)53399)) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (unsigned char)149))));
        arr_30 [i_7] = ((/* implicit */unsigned int) (short)32758);
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 22; i_8 += 3) 
    {
        for (long long int i_9 = 3; i_9 < 21; i_9 += 3) 
        {
            {
                arr_35 [(short)20] [i_9] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 701413920U)) ? (0U) : (701413904U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))) : (2224321895U))))));
                var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_11 [i_8 + 1]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-22390)), (0U)))))))));
            }
        } 
    } 
}
