/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148464
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
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) var_3);
        var_16 *= ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
        var_17 |= ((/* implicit */int) var_12);
        var_18 = ((/* implicit */int) (_Bool)1);
    }
    /* LoopSeq 1 */
    for (int i_1 = 2; i_1 < 7; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */int) var_7);
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_19 ^= min((((/* implicit */int) arr_3 [(unsigned char)3] [(short)3])), (((int) 1098071168)));
            arr_8 [i_1] [i_1] = ((/* implicit */signed char) var_14);
        }
        for (int i_3 = 3; i_3 < 8; i_3 += 4) 
        {
            var_20 -= ((/* implicit */_Bool) ((int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (arr_2 [i_1] [(unsigned char)3])))));
            arr_12 [(short)5] [i_3] [i_3 - 2] = ((/* implicit */unsigned char) var_5);
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                var_21 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)254)) & (((/* implicit */int) (unsigned char)2)))))));
                var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [i_1] [i_1]))));
                arr_17 [(unsigned char)2] [i_4] [(unsigned char)2] = var_9;
            }
            arr_18 [i_4] = ((/* implicit */signed char) ((((long long int) var_5)) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4] [i_4]))))))));
            arr_19 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) <= ((+(((/* implicit */int) var_11))))));
            var_23 -= ((signed char) (unsigned char)254);
        }
        for (signed char i_6 = 2; i_6 < 9; i_6 += 3) 
        {
            arr_22 [i_1 + 1] [i_6 - 2] [i_6] = ((/* implicit */int) arr_6 [i_6] [i_1 + 2]);
            var_24 |= ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_13))) % (var_5)))));
            /* LoopNest 2 */
            for (signed char i_7 = 1; i_7 < 9; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    {
                        var_25 &= ((/* implicit */short) (unsigned char)156);
                        var_26 = ((/* implicit */unsigned char) var_0);
                        var_27 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)221))) + (1767813357179649679LL)));
                        var_28 ^= ((/* implicit */unsigned long long int) var_8);
                    }
                } 
            } 
            arr_29 [(_Bool)1] [(short)3] [(unsigned char)2] = ((/* implicit */unsigned char) (-(((arr_1 [i_1 + 3] [i_6 - 1]) & (arr_1 [i_1 + 3] [i_6 - 1])))));
        }
        var_29 = ((/* implicit */int) var_9);
        var_30 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 2] [i_1 - 1])) | (((/* implicit */int) arr_7 [8] [i_1 - 2] [i_1 - 1]))))) & ((-(1600189545U)))));
    }
    var_31 = ((((/* implicit */int) var_2)) % (max((var_4), ((-(((/* implicit */int) var_2)))))));
}
