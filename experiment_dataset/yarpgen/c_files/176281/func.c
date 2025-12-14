/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176281
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_14))));
    var_19 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = (signed char)13;
        arr_3 [i_0] = ((/* implicit */unsigned int) (unsigned short)34663);
        var_20 = ((/* implicit */unsigned char) (signed char)-8);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) (short)22413);
            var_22 += ((/* implicit */short) 0U);
        }
        for (short i_2 = 4; i_2 < 18; i_2 += 2) 
        {
            arr_8 [1] [1] &= -1049794825;
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) 2199023124480ULL);
            var_23 = ((/* implicit */unsigned char) (signed char)-4);
            /* LoopSeq 2 */
            for (unsigned int i_3 = 2; i_3 < 17; i_3 += 3) /* same iter space */
            {
                arr_12 [i_3] [i_2 - 4] [16ULL] = ((/* implicit */unsigned long long int) (short)-22391);
                arr_13 [i_0] [(unsigned short)16] [i_0] [i_0] |= ((/* implicit */int) 18446741874686427127ULL);
            }
            for (unsigned int i_4 = 2; i_4 < 17; i_4 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (short)-22411))));
                arr_16 [14ULL] [i_2] [(unsigned short)2] [4U] = ((/* implicit */unsigned int) (signed char)4);
                arr_17 [i_4] = ((/* implicit */int) (unsigned short)20);
            }
        }
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 1) 
    {
        var_25 ^= ((/* implicit */int) 2593052130U);
        arr_22 [0] [(signed char)8] &= ((/* implicit */unsigned short) 1271802687955161224ULL);
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (short)-32745))));
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) 17112791674959698688ULL))));
        arr_23 [i_5] [4ULL] = ((/* implicit */int) 1333952398749852929ULL);
    }
    var_28 -= ((/* implicit */int) var_15);
}
