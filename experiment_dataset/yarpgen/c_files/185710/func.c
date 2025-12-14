/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185710
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (min((((((/* implicit */_Bool) max((var_15), (arr_4 [i_1])))) ? (arr_1 [i_1]) : (min((((/* implicit */unsigned int) var_1)), (arr_0 [i_1] [i_0]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)28631))))))))))));
                var_18 = ((/* implicit */unsigned char) min((0U), (((unsigned int) arr_2 [i_0]))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4433230883192832ULL))));
                            var_20 = ((/* implicit */int) min((max((max((((/* implicit */unsigned long long int) arr_2 [i_0])), (0ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-21139)), (5U)))))), (((((/* implicit */_Bool) ((signed char) var_13))) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [(short)18] [i_0] [i_2] [i_2])) : (18446744073709551609ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_19 [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) min((4294967280U), (min((1526119607U), (arr_9 [(_Bool)1] [i_5] [i_5] [(_Bool)1] [i_4])))));
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 11; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((int) arr_23 [(unsigned short)4] [i_5] [11U]))) / (((((/* implicit */_Bool) arr_22 [i_5] [10ULL] [10ULL] [i_7] [i_7])) ? (arr_0 [i_4] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
                            var_22 = ((/* implicit */unsigned char) max((arr_5 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_21 [(unsigned char)12] [i_6] [(_Bool)1]))))), (0U))))));
                            var_23 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                var_25 = ((/* implicit */short) arr_9 [(signed char)0] [i_5] [i_5] [i_5] [i_4]);
                var_26 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_2 [18LL])))))) & (((((/* implicit */_Bool) ((short) var_0))) ? (((997706484U) ^ (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)54), ((unsigned char)165)))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */int) var_14);
    var_28 = (((~(var_9))) + (min((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (var_6))), (((/* implicit */unsigned int) ((short) (unsigned char)248))))));
    var_29 = ((/* implicit */unsigned char) (_Bool)1);
}
