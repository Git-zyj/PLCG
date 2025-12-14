/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162934
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (((((~(((/* implicit */int) (unsigned char)63)))) <= (arr_1 [i_0] [i_0]))) && (((/* implicit */_Bool) max(((short)-32752), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))));
        arr_3 [i_0] [i_0] = ((((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (unsigned short)7)), (arr_1 [i_0] [i_0])))))) + (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)65225)))));
        arr_4 [i_0] = (unsigned short)63328;
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (((+(((/* implicit */int) ((((/* implicit */int) var_12)) >= (3145728)))))) << (((((((((/* implicit */int) var_5)) << (((((/* implicit */int) (unsigned char)63)) - (62))))) + (((/* implicit */int) ((arr_1 [i_0] [i_0]) == (arr_1 [i_0] [i_0])))))) - (80280)))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((((3145728) / (var_7))) == ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 22; i_3 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_6 [i_2] [i_2]))))));
                    arr_13 [17ULL] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) (short)32752);
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 1) 
                        {
                            {
                                arr_19 [i_1] [i_3] [i_3 + 2] [0ULL] [i_5] = ((/* implicit */unsigned int) (((((-(((/* implicit */int) var_1)))) + (2147483647))) >> (((/* implicit */int) ((_Bool) var_3)))));
                                arr_20 [19LL] [i_2] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)55)), ((unsigned short)310))))));
                                var_16 += ((/* implicit */unsigned long long int) var_11);
                                var_17 = ((/* implicit */unsigned char) ((_Bool) (signed char)8));
                            }
                        } 
                    } 
                    arr_21 [i_3] [i_2] [i_2] [(_Bool)1] = ((/* implicit */int) ((_Bool) var_8));
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1] [(_Bool)1]))))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) min((var_1), (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))), (min((((/* implicit */unsigned short) var_4)), ((unsigned short)310)))))) - (282)))));
    }
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        for (unsigned char i_7 = 2; i_7 < 20; i_7 += 3) 
        {
            {
                var_19 += ((/* implicit */signed char) max((((max((arr_16 [i_6] [i_6 + 1] [i_6] [i_6] [(unsigned char)10]), (((/* implicit */unsigned int) 3145719)))) << (((3145733) - (3145706))))), (((/* implicit */unsigned int) max((max((((/* implicit */int) (unsigned char)245)), ((-2147483647 - 1)))), (((/* implicit */int) max(((unsigned char)163), (((/* implicit */unsigned char) var_11))))))))));
                arr_26 [i_6] [i_7] = ((/* implicit */unsigned char) (!(var_12)));
                var_20 = ((/* implicit */unsigned char) (~(((arr_12 [i_6 + 1]) + (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_10)), (var_8))), (((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) var_8))))));
}
