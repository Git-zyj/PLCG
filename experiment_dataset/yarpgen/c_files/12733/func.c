/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12733
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (unsigned char)85))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)8872))))) == (var_12))))));
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_20 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) max((arr_0 [i_0 - 2]), (var_8)))), ((+((+(var_4)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            arr_5 [i_1] [i_1] [i_1] = min((arr_4 [i_0] [i_0 - 2]), (((/* implicit */unsigned short) (((~(((/* implicit */int) (short)30759)))) == (((/* implicit */int) max(((unsigned char)85), ((unsigned char)170))))))));
            var_21 = ((/* implicit */long long int) arr_0 [i_0]);
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) -909780327)))));
        }
        var_22 = ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 3; i_2 < 16; i_2 += 2) 
        {
            var_23 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_2])) ? (var_12) : (var_12)))))) * (min((((/* implicit */unsigned long long int) var_16)), (((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_7 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170)))))))));
            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))));
            arr_11 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2])))))) * (((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_2 [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned char)100))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 2])))))));
        }
    }
    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned short) var_2);
        var_25 = ((/* implicit */int) arr_2 [i_3]);
    }
    for (unsigned char i_4 = 3; i_4 < 15; i_4 += 4) 
    {
        arr_20 [i_4] = arr_10 [(unsigned char)6] [(unsigned char)6] [(unsigned char)6];
        /* LoopSeq 2 */
        for (short i_5 = 1; i_5 < 15; i_5 += 2) 
        {
            var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-2951)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)85)) - (81)))));
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                var_27 = ((/* implicit */unsigned int) (_Bool)0);
                arr_27 [i_4] [i_6] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [2LL]) >> (((((/* implicit */int) (unsigned char)205)) - (174)))))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)5507)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)44))) : (1147898720038997165LL))))))));
            }
        }
        for (unsigned char i_7 = 1; i_7 < 13; i_7 += 2) 
        {
            var_28 = ((/* implicit */unsigned char) arr_23 [i_7 + 4] [i_4] [i_4 + 2]);
            arr_30 [(short)6] [i_7] |= (unsigned char)85;
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)27340)) ^ (((/* implicit */int) (unsigned char)212))));
            arr_31 [i_7] [i_7] [i_4] = ((/* implicit */_Bool) 0U);
        }
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 72303521U)) ? (2923985470U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171)))));
    }
    for (short i_8 = 0; i_8 < 19; i_8 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_9 = 2; i_9 < 17; i_9 += 2) 
        {
            arr_36 [i_9] [i_9] [i_8] = ((/* implicit */unsigned short) arr_35 [i_8]);
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 3; i_10 < 18; i_10 += 4) 
            {
                for (unsigned char i_11 = 1; i_11 < 18; i_11 += 2) 
                {
                    for (unsigned char i_12 = 1; i_12 < 16; i_12 += 4) 
                    {
                        {
                            var_31 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_8] [i_9] [i_9])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)0))) || (((/* implicit */_Bool) min((var_18), (((/* implicit */long long int) var_12)))))))) : (((/* implicit */int) ((short) arr_40 [i_12] [i_10 + 1] [i_10 + 1] [i_9 - 1])))));
                            var_32 += ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_32 [i_9 - 1] [i_12 + 2])) ? (((/* implicit */int) arr_32 [i_8] [i_11 + 1])) : (((/* implicit */int) arr_32 [i_8] [i_9 - 1])))), (((((/* implicit */int) arr_39 [i_10 - 1])) / (((/* implicit */int) arr_32 [i_9 + 1] [i_8]))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            var_33 = (-(((/* implicit */int) (short)27340)));
            var_34 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_39 [i_8]))))), (((((/* implicit */_Bool) arr_34 [i_8] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17664))) : (arr_34 [i_8] [i_8])))));
            var_35 = ((unsigned int) max((((/* implicit */long long int) arr_39 [i_8])), (1147898720038997165LL)));
        }
        for (unsigned char i_14 = 2; i_14 < 16; i_14 += 2) 
        {
            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_44 [i_14 + 1] [i_14 + 1])) : (((/* implicit */int) arr_46 [i_14 + 2]))))) / (min((((((/* implicit */_Bool) var_6)) ? (72303521U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned int) (_Bool)1)))))))));
            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_42 [i_14] [i_14] [i_14 + 2] [i_14] [i_14])))) ? (((/* implicit */int) ((arr_42 [(unsigned char)6] [(unsigned char)6] [i_14 - 1] [i_14] [i_14]) < (arr_42 [i_8] [i_8] [i_14 + 3] [(unsigned char)2] [i_14])))) : (min((arr_42 [2ULL] [i_14] [i_14 - 2] [i_14 - 2] [i_14]), (arr_42 [i_8] [i_8] [i_14 + 2] [6U] [i_14])))));
        }
        var_38 = min((-1750947189), (((/* implicit */int) (unsigned short)17966)));
    }
}
