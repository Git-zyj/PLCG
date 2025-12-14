/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145181
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_12 = ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_6 [i_0] [i_0])))));
                    arr_8 [i_0] = ((((/* implicit */_Bool) ((1868987331) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 7278152505863197112LL))) ? (((/* implicit */int) arr_5 [11LL] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_1]))) ^ (0ULL))), (((/* implicit */unsigned long long int) (-(var_4)))))));
                }
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) arr_11 [i_1] [(short)3] [i_1] [(short)3] [i_1] [i_1]);
                            var_14 = max((((/* implicit */int) arr_6 [i_0] [i_0])), (min(((+(((/* implicit */int) arr_6 [i_0] [i_0])))), (((/* implicit */int) arr_3 [i_0] [(unsigned short)4] [i_4])))));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */int) 2957118456U);
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            var_15 = ((short) arr_7 [i_6] [i_0] [i_1] [i_0]);
                            var_16 = ((/* implicit */int) max((var_16), ((-(((((/* implicit */int) (!(((/* implicit */_Bool) 205833633517582411LL))))) * (((/* implicit */int) ((signed char) arr_5 [i_0] [i_1] [i_0])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((unsigned short) ((((1590081530U) >> (((/* implicit */int) (unsigned short)22)))) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        for (unsigned int i_8 = 1; i_8 < 22; i_8 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) -1161650297))) ? (((/* implicit */int) (short)6159)) : (((/* implicit */int) ((((/* implicit */int) (short)-6160)) >= (-2147483646))))));
                arr_24 [i_7] [(unsigned short)16] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_18 [i_7])) ? (((/* implicit */int) arr_18 [i_7])) : (((/* implicit */int) arr_22 [i_7] [i_8 + 1])))) ^ (((((((/* implicit */int) arr_18 [i_7])) + (2147483647))) >> (((/* implicit */int) (signed char)0))))));
            }
        } 
    } 
}
