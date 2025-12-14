/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176587
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
    var_19 = (+(0U));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [(signed char)1] = ((/* implicit */unsigned short) max((0U), (((/* implicit */unsigned int) (short)24276))));
                var_20 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) var_17)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45965))))));
                var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (short)-27150))))) ? (((/* implicit */int) max(((unsigned char)253), (((/* implicit */unsigned char) arr_2 [i_1] [i_0]))))) : (((/* implicit */int) (unsigned char)253))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 3; i_2 < 15; i_2 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) ((signed char) 236765476U));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2 + 3])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((max((((/* implicit */unsigned short) arr_7 [(short)9])), (arr_6 [i_2]))), (arr_6 [i_2]))))) : (((((/* implicit */_Bool) (unsigned short)3434)) ? (((long long int) var_14)) : (((/* implicit */long long int) min((arr_5 [i_2]), (((/* implicit */unsigned int) (unsigned short)47839)))))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) var_10);
                    arr_12 [(unsigned char)0] [i_2 - 1] [i_3] [i_4] = ((/* implicit */long long int) arr_8 [i_4] [i_3]);
                }
            } 
        } 
    }
    for (unsigned int i_5 = 3; i_5 < 15; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            var_25 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_5)), (arr_10 [16ULL] [i_6] [7U] [i_5]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19592))) == (arr_5 [i_5]))))))) ? ((-(4398038122496ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 1; i_7 < 17; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    {
                        arr_23 [i_8] [i_8] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_7])) <= (((/* implicit */int) var_10))))), (arr_16 [i_5 + 1])))) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) arr_8 [i_5] [i_6]))));
                        var_26 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (((((/* implicit */_Bool) arr_18 [i_7 + 2] [i_8] [i_5 - 2])) ? (((/* implicit */int) arr_7 [i_5 + 1])) : (((/* implicit */int) arr_7 [i_5 + 3])))) : (((((/* implicit */_Bool) max((arr_18 [i_5] [i_8] [i_8]), (((/* implicit */unsigned short) var_15))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)47852)))) : (((/* implicit */int) (unsigned short)8188))))));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (-(max((arr_10 [i_5 - 2] [i_5 - 1] [i_6] [i_7 + 1]), (((/* implicit */unsigned int) min(((short)-27150), (((/* implicit */short) arr_8 [i_6] [i_7]))))))))))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_16))) == ((-(((/* implicit */int) arr_6 [i_5]))))))) != (((/* implicit */int) ((((/* implicit */_Bool) 17147957715420835102ULL)) || (((/* implicit */_Bool) arr_19 [i_6] [i_6] [(unsigned char)1] [i_6])))))));
                    }
                } 
            } 
        }
        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) arr_9 [i_5]))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            for (unsigned char i_10 = 4; i_10 < 18; i_10 += 4) 
            {
                {
                    arr_31 [12ULL] [i_5] [i_5] [(unsigned short)14] = ((/* implicit */unsigned char) 3841974953U);
                    arr_32 [i_5] [i_5] [i_10] [i_9] = ((/* implicit */int) arr_13 [i_5]);
                    arr_33 [i_5] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_21 [i_5] [i_9] [i_10 + 1] [i_5 - 1])))) ^ (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_5 + 4])) ? (956330169) : (((/* implicit */int) (unsigned short)7751))))))));
                }
            } 
        } 
    }
}
