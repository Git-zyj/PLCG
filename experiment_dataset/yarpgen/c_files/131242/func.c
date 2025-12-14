/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131242
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((short) arr_4 [i_0]));
                    var_15 += (-(((/* implicit */int) (short)5745)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 3; i_3 < 19; i_3 += 4) 
    {
        for (short i_4 = 1; i_4 < 20; i_4 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (short i_5 = 2; i_5 < 19; i_5 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_4 + 1] [i_4 - 1])) ? (min((((((/* implicit */_Bool) arr_8 [i_3] [i_5 - 1])) ? (-2086252418) : (arr_8 [i_4] [i_4]))), (((/* implicit */int) var_2)))) : (((((((/* implicit */_Bool) (unsigned short)60831)) ? (((/* implicit */int) (unsigned short)16368)) : (var_9))) / (arr_12 [i_3 + 1] [i_4 - 1] [i_5 + 1] [i_5 + 1])))));
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        var_17 = ((/* implicit */short) ((((((((/* implicit */int) (short)-29383)) < (((/* implicit */int) var_10)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_4 - 1] [i_5] [i_6])) ? (-2086252418) : (var_8)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_8 [i_5 + 1] [i_3]), (((/* implicit */int) arr_14 [i_3] [i_3] [i_3 + 2] [i_3]))))) ? (((((/* implicit */_Bool) (short)-5746)) ? (((/* implicit */int) arr_14 [i_3] [i_4] [i_5] [i_6])) : (-1562995629))) : ((~(((/* implicit */int) arr_17 [i_3 - 1] [i_3] [i_3] [i_3])))))))));
                        arr_18 [i_3] [i_6] [i_5 + 1] [i_4] = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)22768)), ((unsigned short)65535)))) ? ((~(((/* implicit */int) (short)22768)))) : ((~(arr_12 [i_3 + 1] [i_3] [i_3] [i_3 - 3]))));
                    }
                    var_18 = ((/* implicit */unsigned short) (short)-5746);
                    arr_19 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) (unsigned short)49167)) & (((/* implicit */int) arr_9 [i_3] [i_4])))) : (max((((((/* implicit */_Bool) (unsigned short)63)) ? (arr_12 [i_3 + 1] [i_3] [i_4 + 1] [i_5]) : (((/* implicit */int) var_7)))), (((((/* implicit */int) arr_9 [i_3 + 1] [i_3 + 2])) ^ (((/* implicit */int) (short)140))))))));
                }
                /* vectorizable */
                for (short i_7 = 2; i_7 < 19; i_7 += 1) /* same iter space */
                {
                    arr_22 [8] &= ((/* implicit */short) (~(((/* implicit */int) arr_16 [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7 - 2]))));
                    var_19 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-7682))));
                }
                /* vectorizable */
                for (short i_8 = 2; i_8 < 19; i_8 += 1) /* same iter space */
                {
                    arr_25 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((arr_11 [i_8 + 1] [i_4 + 1] [i_3 - 1]) < (1929842165)));
                    var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)13)) ? ((~(16383))) : (((/* implicit */int) (short)5763))));
                    var_21 = ((/* implicit */int) ((short) var_0));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        for (short i_10 = 3; i_10 < 17; i_10 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1048575)) ? (((/* implicit */int) arr_29 [i_3] [i_4 - 1] [i_8] [i_8] [i_3 - 1] [i_9])) : (((/* implicit */int) arr_29 [i_3 + 2] [i_4 + 1] [i_8] [i_9] [i_3 - 2] [i_8]))));
                                var_23 = ((/* implicit */short) var_6);
                            }
                        } 
                    } 
                    var_24 &= ((((/* implicit */_Bool) 1254342587)) ? (((/* implicit */int) arr_24 [i_3 - 1] [i_4 + 1] [i_8 + 1] [14])) : (1929842165));
                }
                for (short i_11 = 2; i_11 < 19; i_11 += 1) /* same iter space */
                {
                    var_25 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((max(((unsigned short)65522), ((unsigned short)65522))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32752)) && (((/* implicit */_Bool) var_13))))))))));
                    var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_3] [i_4])) || (((/* implicit */_Bool) arr_12 [i_11 - 1] [i_3] [i_11] [i_4]))));
                    var_27 = ((/* implicit */int) arr_13 [i_3] [i_3 - 3]);
                }
                arr_35 [i_4 - 1] [i_4] [i_3] = ((int) max((1929842165), (((/* implicit */int) (unsigned short)63))));
                var_28 += ((/* implicit */unsigned short) max((arr_11 [i_3 + 1] [i_4] [i_3 + 2]), (max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) arr_34 [i_3] [i_3 + 2] [i_3 - 3] [i_4 + 1]))))));
            }
        } 
    } 
}
