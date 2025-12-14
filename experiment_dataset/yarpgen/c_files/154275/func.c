/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154275
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) + (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)248)) - (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) ((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 3; i_3 < 10; i_3 += 2) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned char) (((+(((((/* implicit */int) (unsigned char)199)) << (((((/* implicit */int) var_1)) - (81))))))) >> ((((((+(((/* implicit */int) (unsigned char)15)))) + ((~(((/* implicit */int) arr_0 [i_2])))))) - (11103)))));
                        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (((unsigned int) arr_5 [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */short) arr_4 [i_0])))))))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */int) ((signed char) arr_6 [i_0 + 1] [i_0] [i_2 + 1] [i_3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                    }
                    for (short i_4 = 3; i_4 < 10; i_4 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */short) var_7);
                        arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_4 - 1] = ((/* implicit */short) var_5);
                    }
                    var_17 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1] [i_0]))))));
                    arr_14 [(unsigned char)0] [i_1] [i_2 - 1] |= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 1] [i_1] [(signed char)2] [i_2 - 1] [i_2 + 1])) - (162))))) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [(short)2] [6ULL])) : (((/* implicit */int) arr_0 [i_0]))))))), ((+(var_9)))));
                    arr_15 [10U] [i_0] [(signed char)9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)249)) ? (var_9) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_0))))), (3160659359U))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 3; i_5 < 17; i_5 += 3) 
    {
        for (unsigned int i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            for (short i_7 = 1; i_7 < 18; i_7 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) var_7);
                    arr_24 [i_5 + 3] [i_6] [i_6] = ((/* implicit */unsigned char) (+(min((4285982556681743188LL), (((/* implicit */long long int) arr_20 [i_5] [i_6 + 3] [i_7]))))));
                    arr_25 [(short)4] [i_7] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)8155)) || (((/* implicit */_Bool) arr_17 [i_7])))))) % (min((var_12), (((/* implicit */unsigned int) var_1))))))), (max((max((arr_19 [(unsigned char)0] [i_6]), (((/* implicit */unsigned long long int) arr_21 [i_7])))), (((/* implicit */unsigned long long int) arr_20 [i_6] [i_7 - 1] [i_7 + 2]))))));
                }
            } 
        } 
    } 
}
