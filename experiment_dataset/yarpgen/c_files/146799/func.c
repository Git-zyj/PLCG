/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146799
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_11 += ((/* implicit */unsigned char) ((((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) var_1))))) % (((((((((/* implicit */int) (short)9613)) + (-675534731))) + (2147483647))) >> (((/* implicit */int) ((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))))))));
        var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)240)) ? (17450738169064347256ULL) : (17450738169064347245ULL)))))));
        arr_4 [i_0] = ((/* implicit */short) (~(((((/* implicit */int) (unsigned char)15)) * (((/* implicit */int) arr_2 [i_0]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) (~((-(((/* implicit */int) (short)180))))));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        for (unsigned short i_2 = 3; i_2 < 17; i_2 += 2) 
        {
            {
                arr_11 [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_6)) + (((/* implicit */int) var_10))))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 2; i_3 < 16; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        {
                            var_13 *= min(((~(((int) (short)-32755)))), (((/* implicit */int) ((((((/* implicit */int) arr_16 [(short)2] [i_3] [i_2] [i_1])) + (((/* implicit */int) var_3)))) != (((/* implicit */int) min((((/* implicit */short) var_8)), (var_3))))))));
                            /* LoopSeq 2 */
                            for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                            {
                                arr_22 [i_1] [i_1] [i_5] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */int) arr_16 [i_2 - 3] [i_3 - 2] [i_1] [i_1])) < (((int) max((((/* implicit */short) var_6)), ((short)0))))));
                                arr_23 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((int) (unsigned short)65522))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) < (var_0)))))), ((+(((/* implicit */int) var_3))))));
                            }
                            for (int i_6 = 2; i_6 < 16; i_6 += 4) 
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_3 + 1] [i_1] [i_6 + 1] [i_3] [i_1])) ? (min((var_0), ((~(var_0))))) : (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (signed char)121)))))))));
                                arr_28 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = arr_14 [i_1] [i_1];
                            }
                            var_15 = ((/* implicit */int) (unsigned short)0);
                            arr_29 [i_2] [i_2 - 3] [i_2 + 1] [i_2] = ((/* implicit */_Bool) (~(((((((/* implicit */int) (short)-32755)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)93)) - (86)))))));
                            arr_30 [i_1] [i_1] [i_3] [i_4] = ((((/* implicit */int) (unsigned short)65522)) % (((int) ((int) (unsigned short)9))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        for (unsigned short i_8 = 2; i_8 < 23; i_8 += 3) 
        {
            {
                var_16 = min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)14563))))), (996005904645204359ULL));
                var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 62914560U)) ? (9022851541243581395LL) : (((/* implicit */long long int) -1370872560)))) >= (((/* implicit */long long int) ((/* implicit */int) var_10)))));
            }
        } 
    } 
    var_18 |= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((var_6), (var_4)))) : ((+(((/* implicit */int) var_7)))))));
    var_19 = ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) -1)))))), (var_7)));
}
