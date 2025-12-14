/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113232
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1033277321)) ? (7005508434806186761ULL) : (((/* implicit */unsigned long long int) -1829150066))))) ? (((/* implicit */unsigned int) var_4)) : (min((((/* implicit */unsigned int) (signed char)127)), (var_9)))))) ? (((int) min(((signed char)-117), ((signed char)127)))) : (((((/* implicit */_Bool) max((-1779515805), (1299229243)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1 - 2] = ((/* implicit */long long int) ((int) ((unsigned short) (unsigned char)44)));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) var_7);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 3; i_2 < 19; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    arr_15 [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */signed char) min((var_5), (((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */int) (unsigned char)127)) : (arr_7 [i_2 + 1] [i_2 + 1])))));
                    arr_16 [i_2] [i_3 + 2] [i_3] [i_3 + 2] = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2 + 1] [i_3 + 1])))))) & ((~(arr_0 [i_2 - 1] [i_3 + 1]))));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        arr_20 [i_5] [i_3 + 2] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_7)) | (arr_4 [i_3] [i_3] [i_3 - 1])))), (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)32752)))) | (((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_4])) ? (((/* implicit */long long int) -2097152)) : (arr_10 [i_2] [i_2])))))));
                        arr_21 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)127)))) ? (4304959249425482452ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_15)), ((-2147483647 - 1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (-(arr_19 [i_2 - 2] [i_2 - 2] [i_3 + 1] [i_5] [i_5])))))) : (((((/* implicit */unsigned int) max((arr_12 [i_2] [i_3] [i_5]), (arr_1 [i_2] [i_2])))) & (((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 4; i_6 < 20; i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_2] [i_3 + 1] [i_4] [i_5] [i_6 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_17 [i_6] [i_6] [i_6 - 2] [i_2 - 1])) : (((/* implicit */int) arr_17 [i_6 - 2] [i_6 - 4] [i_6 - 4] [i_2 - 3]))))) ? ((-(((/* implicit */int) (signed char)117)))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)9847)) ? (((/* implicit */int) (unsigned char)162)) : (-1457553992))))));
                            arr_26 [12] [i_5] [12] [i_2] [i_2] = ((/* implicit */unsigned short) var_12);
                            arr_27 [i_2 - 1] [(unsigned short)8] [(unsigned short)2] [i_5] [i_2 - 1] [i_2 - 1] [i_5] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((/* implicit */int) arr_8 [i_6 - 3])) : ((+(2097179))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), ((unsigned short)0)))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 4; i_7 < 20; i_7 += 1) /* same iter space */
                        {
                            arr_31 [i_7] [i_5] [i_4] [i_5] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3]))) * (arr_19 [i_7] [i_5] [(short)19] [i_5] [i_2])));
                            arr_32 [8] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */signed char) var_16);
                        }
                    }
                }
            } 
        } 
        arr_33 [i_2] [i_2 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) (unsigned short)65523))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_12)))) ? (((/* implicit */int) arr_11 [i_2 - 2] [i_2 - 3])) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) 805306368))))))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            for (int i_9 = 1; i_9 < 19; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 1; i_11 < 19; i_11 += 2) 
                        {
                            {
                                arr_42 [i_9] [i_8] [i_9] [i_8] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_3 [i_8]), (((/* implicit */int) var_2)))))));
                                arr_43 [i_8] [i_10] [i_9] [i_8] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(2147483647))))));
                                arr_44 [i_2] [i_8] [i_9] [i_9] [i_11] = ((/* implicit */_Bool) ((arr_28 [i_2 - 1] [i_2 - 1] [i_9] [i_9 + 2] [i_9] [i_10] [i_11]) ? (((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_11 + 1])) ? (min((((/* implicit */int) (unsigned char)206)), (var_13))) : (((/* implicit */int) arr_34 [i_9 + 2] [i_11 + 2])))) : (arr_29 [(_Bool)1] [i_10] [i_9])));
                                arr_45 [i_10] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)56088)) * (((/* implicit */int) (_Bool)0))));
                                arr_46 [i_2] [i_2] [(short)9] [i_9 + 2] [i_9 - 1] [i_10] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (-2097193)));
                            }
                        } 
                    } 
                    arr_47 [i_9] [i_8] [i_9] = ((/* implicit */unsigned char) arr_0 [i_2] [i_9]);
                    arr_48 [i_8] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned int) arr_13 [i_8] [i_2 - 1]))))), (min((((/* implicit */unsigned long long int) (unsigned char)120)), (5847089270500061088ULL)))))) ? (min((((/* implicit */unsigned int) 2147483647)), (arr_23 [i_8] [i_2 + 2] [i_9 - 1] [i_9] [i_9 + 2] [i_9 - 1] [i_9 + 1]))) : (((/* implicit */unsigned int) min((2147483647), (((/* implicit */int) (signed char)(-127 - 1))))))));
                }
            } 
        } 
    }
}
