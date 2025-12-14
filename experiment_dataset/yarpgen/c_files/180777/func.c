/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180777
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] [i_0] [(_Bool)1] [i_0] = ((((/* implicit */int) arr_4 [i_0] [i_2] [i_3])) * (((int) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_8 [(unsigned short)3] [i_2] [i_2] [(unsigned char)15] [i_1] [i_0]))))));
                        var_10 = ((/* implicit */long long int) (~(13436507207762963825ULL)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                {
                    var_11 += ((/* implicit */short) (!(((/* implicit */_Bool) (-(min((-1190867050), (-1190867050))))))));
                    arr_14 [i_0] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_0 [i_4]), (((/* implicit */signed char) arr_1 [i_0]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)31)))))));
                    var_12 -= ((/* implicit */_Bool) (~(((((/* implicit */int) (!(((/* implicit */_Bool) 1190867040))))) / (((/* implicit */int) var_0))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (short)9206)))) != (((/* implicit */int) arr_3 [i_6] [i_6] [i_6]))));
        var_14 = (~(((/* implicit */int) (!(((/* implicit */_Bool) -1190867061))))));
        /* LoopSeq 3 */
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
        {
            arr_21 [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_16 [i_6])) + (2147483647))) << (((((((/* implicit */int) arr_16 [i_6])) + (4269))) - (24)))));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                arr_24 [i_6] [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) ((2106118676866265076LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                var_15 = ((/* implicit */short) var_0);
                var_16 |= (-(arr_10 [(signed char)18] [i_6]));
            }
        }
        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
        {
            arr_27 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-27411)) ? (((/* implicit */int) (unsigned char)255)) : (-1190867040)));
            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)1))));
        }
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (signed char)100))));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2106118676866265077LL)) ? (((/* implicit */int) arr_2 [i_6] [(short)14])) : (((/* implicit */int) arr_19 [i_6] [i_6]))));
        }
    }
    for (unsigned char i_11 = 2; i_11 < 9; i_11 += 2) 
    {
        arr_32 [i_11] = ((/* implicit */unsigned short) arr_2 [i_11] [i_11]);
        arr_33 [i_11] |= max((((/* implicit */unsigned long long int) (!(arr_1 [i_11 - 2])))), (((arr_1 [i_11 + 1]) ? (arr_23 [i_11 - 1] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_11 + 1]))))));
    }
    var_20 = ((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned int) var_6))));
}
