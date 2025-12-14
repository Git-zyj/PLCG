/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152157
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
    var_17 = ((/* implicit */unsigned int) 9127181171147083145LL);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((unsigned int) 6858945002239585118ULL)) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_16))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((arr_1 [i_0]) & (((/* implicit */long long int) var_0)))) ^ (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [11ULL])), (var_12)))))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_18 = ((/* implicit */short) 10458041979359311934ULL);
            var_19 = ((/* implicit */short) (-(max((7399453683010455857ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]))))));
            var_20 = max((arr_1 [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) arr_1 [i_1]))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                arr_9 [i_0] [1] [i_1] [i_2] = ((0LL) ^ (arr_1 [i_0]));
                var_21 &= ((/* implicit */unsigned long long int) ((signed char) ((unsigned char) (short)18589)));
                var_22 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-18609))));
                arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)18589))));
                var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)18570)) ? ((-(((/* implicit */int) var_8)))) : ((+(((/* implicit */int) (short)4358))))));
            }
            for (unsigned char i_3 = 1; i_3 < 15; i_3 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)23675)) + ((-(((/* implicit */int) (_Bool)1)))))) | (min((((/* implicit */int) ((signed char) var_16))), ((~(((/* implicit */int) arr_4 [i_0] [i_1]))))))));
                var_25 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_3])) ? (((/* implicit */int) ((_Bool) (short)-18606))) : (((/* implicit */int) ((short) (_Bool)1)))))));
            }
            for (unsigned char i_4 = 1; i_4 < 15; i_4 += 1) /* same iter space */
            {
                arr_18 [i_0] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_17 [i_0] [(unsigned short)8] [i_4] [(unsigned short)8])) ? (((/* implicit */unsigned long long int) arr_13 [i_0])) : (arr_8 [i_0] [i_1] [i_4 - 1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18611)) ? (((/* implicit */int) (_Bool)1)) : (1583733599)))) ? (arr_11 [(unsigned char)14]) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (var_5)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (short)23675))))))));
                arr_19 [i_4] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))));
                var_26 = 1583733599;
                var_27 |= ((/* implicit */short) (_Bool)1);
                var_28 ^= ((/* implicit */long long int) var_12);
            }
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 16; i_5 += 1) 
        {
            arr_23 [i_0] = ((/* implicit */_Bool) (short)-18576);
            arr_24 [i_0] = ((/* implicit */signed char) (unsigned char)137);
        }
    }
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            {
                var_29 = ((/* implicit */short) var_4);
                var_30 |= ((/* implicit */short) ((((/* implicit */_Bool) min((var_6), (((/* implicit */short) (!(((/* implicit */_Bool) (short)23665)))))))) ? (((/* implicit */int) var_4)) : (861758377)));
                var_31 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_28 [15U])), ((+((~(arr_25 [i_6] [i_6])))))));
            }
        } 
    } 
}
