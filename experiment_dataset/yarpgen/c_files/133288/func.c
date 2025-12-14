/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133288
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] = (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))));
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned short) ((arr_0 [i_0]) & (((/* implicit */int) var_12))))))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1] = ((/* implicit */int) var_15);
                }
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 21; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) arr_3 [i_0]);
                                arr_24 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_18 [i_5] [i_1] [i_5] [i_6] [i_6 - 3]), (arr_18 [i_0] [i_1] [i_5] [i_6] [i_6 - 2])))) || (((/* implicit */_Bool) min((arr_19 [i_0 - 2] [i_6 - 3]), (arr_19 [i_0 + 1] [i_6 - 3]))))));
                            }
                        } 
                    } 
                    arr_25 [i_5] [i_1] = ((/* implicit */unsigned short) max((min((((3268549297334088950LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42738))))), (((/* implicit */long long int) (unsigned char)85)))), (((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */long long int) -1941109716)) : (var_18)))));
                    arr_26 [i_5] [i_1] [i_1] [i_0] |= ((/* implicit */short) (((~(((((/* implicit */_Bool) 0U)) ? (0LL) : (((/* implicit */long long int) -1754440945)))))) ^ (((/* implicit */long long int) ((unsigned int) (~(-6058767603298517474LL)))))));
                    arr_27 [i_0 + 1] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) (-(((/* implicit */int) (short)(-32767 - 1)))))) / (((((/* implicit */_Bool) (short)14280)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_1))))), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 31))))))))));
                }
                arr_28 [(short)16] = ((/* implicit */unsigned int) arr_0 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 4; i_8 < 13; i_8 += 2) 
    {
        for (unsigned int i_9 = 2; i_9 < 13; i_9 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */int) var_14);
                                arr_40 [i_10] [i_11] [i_10] [i_10] [i_9] [i_8] = ((/* implicit */int) (unsigned char)120);
                            }
                        } 
                    } 
                } 
                arr_41 [i_9] [i_9 - 2] [i_8] = arr_16 [i_8] [i_8 - 1] [i_8] [i_8];
                arr_42 [i_8] [i_9] [i_9 + 1] = ((/* implicit */long long int) ((unsigned int) (((~(((/* implicit */int) arr_4 [i_8] [i_8])))) == (((((/* implicit */_Bool) (unsigned short)13847)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)127)))))));
                arr_43 [i_8 + 1] [i_8] [i_8 + 1] = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_19)) == (((/* implicit */int) arr_39 [i_9 - 1] [i_9 - 1] [i_9] [i_9] [(_Bool)1] [i_8] [i_8]))))) + (((/* implicit */int) ((unsigned short) var_2)))))) ? (min((((/* implicit */unsigned int) arr_18 [i_8] [i_9] [i_8 - 4] [i_9 - 1] [i_9 - 1])), (((unsigned int) (unsigned char)199)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8 - 4] [i_8 - 3] [i_8] [i_9] [i_8]))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 18309053562882934472ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-330834403193149920LL)))));
    var_24 = ((/* implicit */unsigned char) var_0);
    var_25 += ((/* implicit */unsigned int) var_5);
}
