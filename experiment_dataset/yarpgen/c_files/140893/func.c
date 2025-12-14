/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140893
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) 8ULL);
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (~(1191813660U))))) ? (((/* implicit */int) ((signed char) ((short) arr_0 [i_0])))) : (((/* implicit */int) (_Bool)1))));
        var_20 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) 1383036206U)) ? (((/* implicit */long long int) 1383036231U)) : (var_5))), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0])) << (((/* implicit */int) arr_0 [i_0])))) | (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [(_Bool)1] = ((unsigned int) 8ULL);
                    arr_8 [i_0] [i_1] [(unsigned short)1] = ((/* implicit */signed char) arr_2 [i_2] [i_2] [i_2]);
                    var_21 = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned short) (~(min((((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (2911931083U))), (((((/* implicit */_Bool) var_6)) ? (1383036233U) : (1383036231U)))))));
    var_23 &= ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_12))))) ? (7447967677149643563ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))) : (((((/* implicit */_Bool) 1383036190U)) ? (((1ULL) << (((2911931069U) - (2911931069U))))) : (((unsigned long long int) 1383036206U))))));
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_24 |= ((/* implicit */signed char) arr_12 [(unsigned short)12] [(unsigned short)5] [i_4]);
                var_25 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_12)) == (var_11)))) <= (((/* implicit */int) (unsigned char)54))))), (((unsigned long long int) (short)-6499))));
                var_26 |= ((/* implicit */unsigned short) arr_10 [i_3]);
                arr_13 [i_3] [(unsigned short)9] [3LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_3]))) ? (((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_11 [i_3]) : (arr_11 [i_4]))) : (((((/* implicit */_Bool) 5ULL)) ? (arr_11 [i_4]) : (arr_11 [i_3])))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((((/* implicit */int) (_Bool)1)), (1588972562)))))) : (2911931065U)));
}
