/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15630
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
    var_14 = var_0;
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_15 = min((-1679468469), (((int) ((((/* implicit */int) arr_2 [i_0] [i_1])) | (((/* implicit */int) (_Bool)0))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_9 [i_1] = ((long long int) ((1679468468) | (((/* implicit */int) (_Bool)1))));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & ((+(((/* implicit */int) (short)5747))))));
                    arr_10 [i_1] [i_1] [i_2] = (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */int) (short)-29383)) : (((/* implicit */int) arr_7 [i_0] [i_1] [3U] [i_2]))))))));
                }
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0 - 2] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 3])) ? (-1679468469) : (((/* implicit */int) var_10)))) : (((817012352) * (((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_8 [i_1] [i_3] [i_3])))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_4] [i_3] [i_4])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))) : (min((((/* implicit */long long int) var_13)), (((long long int) var_3))))));
                            arr_15 [i_1] [13] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_1)))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)240)))) & (arr_8 [i_0 - 2] [i_0 + 3] [i_0 - 2])))));
                            arr_16 [i_1] [(unsigned short)17] = ((/* implicit */long long int) var_5);
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) (((((+(var_4))) | (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)16383)))))) / (((/* implicit */int) ((((/* implicit */_Bool) ((2462489890U) % (((/* implicit */unsigned int) 127))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))) : (var_2)))))))));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 20; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 3486574995U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))) >> (((((/* implicit */int) (short)-9682)) + (9688)))))) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (var_4)));
                                var_20 ^= ((/* implicit */unsigned short) var_3);
                                arr_26 [i_6 - 1] [i_1] [i_6 - 1] [i_6] [i_1] = ((/* implicit */unsigned int) (-((~(arr_23 [i_6 - 1] [i_6 + 1] [i_6 + 2] [i_6])))));
                                var_21 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_1 [i_6])))) ^ (min((((((/* implicit */_Bool) (short)11977)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_6 [i_1] [i_5])))), (((/* implicit */int) (unsigned char)231))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_22 *= ((/* implicit */_Bool) var_5);
                        arr_29 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) var_7);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        arr_32 [i_0 + 1] [i_1] [(unsigned short)18] [i_1] [i_5] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [14] [i_0 + 1] [12LL] [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_22 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))));
                        arr_33 [i_1] [i_1] [i_5] [i_9] = (~(((/* implicit */int) arr_20 [i_0 + 2] [i_1] [i_5] [i_9])));
                    }
                }
            }
        } 
    } 
}
