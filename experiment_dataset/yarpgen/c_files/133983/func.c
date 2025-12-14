/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133983
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
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1599324296282660471LL))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (unsigned char)40);
                    arr_9 [i_0] [i_1] [i_2] [11LL] = ((/* implicit */unsigned short) (signed char)-111);
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((var_6), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))))))));
                    arr_10 [i_0] [i_2] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) arr_3 [i_2])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 26761984U)) * (((((/* implicit */_Bool) (unsigned char)1)) ? (6498149112954193464ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))))))) << ((((-(4268205311U))) - (26761975U)))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 4; i_5 < 11; i_5 += 2) 
            {
                {
                    arr_22 [i_4 + 4] = ((/* implicit */unsigned long long int) var_3);
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -1599324296282660471LL)))) * ((((-(1265912540878629899ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                    arr_23 [i_5 - 1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_3])) ? (17332835907548149932ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))))) ^ (max((((/* implicit */unsigned long long int) (signed char)-89)), (16556998970893695627ULL)))))) && (((/* implicit */_Bool) arr_6 [i_3] [i_5] [i_5]))));
                    arr_24 [(signed char)0] [i_4] [i_3] = ((/* implicit */unsigned int) (signed char)110);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_6 = 2; i_6 < 13; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-80))));
                        var_20 = ((/* implicit */unsigned short) (((~(14392826925053714870ULL))) / (((/* implicit */unsigned long long int) (~(var_4))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        var_21 ^= ((/* implicit */short) (+(((unsigned long long int) ((unsigned short) (short)-4167)))));
                        arr_29 [i_7] [i_7] [i_5 - 4] [i_7] [i_7] [i_3] = ((/* implicit */unsigned char) 13379739318294845237ULL);
                        arr_30 [i_4] [i_7] = ((/* implicit */unsigned short) (~(((((unsigned int) (short)8056)) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_22 = ((/* implicit */int) (_Bool)1);
                    }
                }
            } 
        } 
        arr_31 [i_3] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-8046))))) ? (((var_14) ^ (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_19 [i_3] [i_3]))))))));
        arr_32 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((arr_26 [i_3] [i_3] [i_3] [(short)13] [i_3] [i_3]) | (((/* implicit */long long int) ((/* implicit */int) var_15)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) (short)-8057)), (((((/* implicit */_Bool) (unsigned short)38405)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3] [i_3] [i_3]))) : (arr_17 [i_3])))))));
    }
}
