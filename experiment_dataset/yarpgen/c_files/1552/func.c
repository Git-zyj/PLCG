/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1552
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((short) (_Bool)1))))));
                arr_7 [i_0] = ((/* implicit */short) (unsigned short)54921);
            }
        } 
    } 
    var_16 = var_3;
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    var_17 = ((/* implicit */unsigned int) arr_11 [i_2] [7U] [7U]);
                    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) (unsigned short)54921)) - (54921)))));
                    var_19 = ((/* implicit */unsigned long long int) arr_11 [i_2] [14ULL] [i_4]);
                    var_20 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) (_Bool)1))))) << (((((((/* implicit */int) arr_12 [(unsigned char)4] [(signed char)20] [i_4])) ^ (((/* implicit */int) arr_1 [(unsigned short)0])))) + (126)))));
                    var_21 -= ((/* implicit */unsigned char) var_4);
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    arr_18 [i_2] [i_3] [i_3] = ((/* implicit */short) (+(18446744073709551615ULL)));
                    var_22 -= (!(((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_4 [i_2] [i_2] [(unsigned char)8])))));
                }
                for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    arr_21 [i_2] [i_2] = ((/* implicit */unsigned char) ((arr_6 [i_6]) == (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_12)), (var_13)))))));
                    var_23 = ((/* implicit */unsigned char) var_5);
                }
                arr_22 [i_2] [i_2] = ((/* implicit */_Bool) (+(max((arr_15 [i_2] [i_3] [i_2]), (((/* implicit */unsigned int) arr_17 [i_3] [i_2] [i_2]))))));
                var_24 = ((/* implicit */signed char) max((arr_20 [i_2] [i_2] [i_2] [i_3]), (((/* implicit */unsigned long long int) var_7))));
            }
        } 
    } 
    var_25 = ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_6));
}
