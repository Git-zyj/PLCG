/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147921
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        arr_10 [i_2] [8U] [i_2] [i_3 + 4] = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) ((unsigned short) arr_2 [i_0] [(unsigned char)8]))))));
                        var_13 = ((/* implicit */int) (unsigned short)54598);
                        arr_11 [17U] [17U] [i_3 + 1] [18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_1] [i_2] [i_3 + 3]) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) max((arr_5 [i_0] [i_1] [i_0] [i_3]), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (unsigned short)26786)))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 2) 
                    {
                        var_15 -= ((/* implicit */unsigned int) (+((-(102979943928565566ULL)))));
                        var_16 = ((((((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_4 - 1])) ? (((((/* implicit */_Bool) 1622935609U)) ? (7078856701197314128ULL) : (((/* implicit */unsigned long long int) 1895440332)))) : (((/* implicit */unsigned long long int) var_5)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned short)21]))));
                        var_17 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_4 - 3]))))) ? ((~(((/* implicit */int) arr_13 [i_0] [i_1] [i_2])))) : (((/* implicit */int) min((var_8), (var_12))))))));
                        var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26775)) + (-1)))) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_2] [i_4 - 3])) : (((((/* implicit */_Bool) ((arr_14 [i_0] [i_4] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))) : (arr_1 [i_4])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [(unsigned short)16] [i_1] [i_1])), (arr_4 [7])))) : ((~(((/* implicit */int) var_2)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_19 -= ((((/* implicit */_Bool) arr_1 [i_5 - 1])) ? (((/* implicit */int) ((_Bool) 5773000050090334067ULL))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_5 - 1])));
                        arr_17 [i_0] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2]))));
                        arr_18 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (+(8889926566302332240ULL)));
                        arr_19 [(unsigned short)2] [i_1] [(unsigned char)17] [i_5 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7326888239691862143ULL)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (unsigned short)7479))));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_6])) == (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_2])), (var_5)))) ? (((/* implicit */int) arr_15 [i_0] [(unsigned short)15] [i_0])) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_2]))))));
                        var_21 = ((/* implicit */int) arr_2 [i_0] [i_1]);
                        var_22 = ((/* implicit */unsigned long long int) (unsigned short)27161);
                    }
                    var_23 = ((/* implicit */unsigned int) var_8);
                    arr_23 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)9] [i_2])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_2])) : (((/* implicit */int) ((unsigned short) (unsigned char)93)))))) ? (((/* implicit */unsigned int) min((((int) (_Bool)1)), ((-(((/* implicit */int) arr_21 [i_0] [i_0] [i_2] [i_2]))))))) : ((~(var_5)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (~(var_0)))) : (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127)))))))));
    var_25 -= ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37016)) ? (var_0) : (((/* implicit */int) var_1))))))));
}
