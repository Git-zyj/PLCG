/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184004
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
    var_10 = ((/* implicit */int) 2639845796680532197ULL);
    var_11 = ((/* implicit */int) (unsigned short)60554);
    var_12 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)60554)))), (((int) var_3))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_3))))))) : (min((((/* implicit */unsigned int) ((_Bool) var_3))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4981))) % (var_8)))))));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        var_13 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_1 [0] [i_0 - 1])) : (((/* implicit */int) (unsigned short)60554)))))));
        var_14 = ((/* implicit */short) var_5);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
                    var_15 = (unsigned short)60577;
                }
            } 
        } 
        var_16 = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) var_9)))));
    }
    for (int i_3 = 2; i_3 < 8; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            var_17 = var_1;
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((unsigned short) min((((/* implicit */long long int) min(((unsigned short)60554), ((unsigned short)40861)))), (((((-3853922212029780266LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_6)) - (35920)))))))))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (int i_6 = 2; i_6 < 8; i_6 += 3) 
                {
                    {
                        arr_21 [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned short)4958))))))), (((unsigned long long int) arr_2 [i_3]))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (var_6)));
                        arr_22 [i_3] [i_5] [i_3] [i_3] = (((!(((_Bool) (_Bool)0)))) ? (min((min((var_1), (((/* implicit */long long int) arr_0 [i_3])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [(_Bool)1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3] [i_3]))) : (arr_5 [i_3] [i_5] [i_5] [i_6])))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60591))));
                        arr_23 [i_3] [i_3] [i_3] [i_6 + 1] = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_11 [i_6])), (-3853922212029780266LL)));
                    }
                } 
            } 
        }
        var_20 = ((/* implicit */unsigned int) -3853922212029780266LL);
        /* LoopNest 3 */
        for (unsigned char i_7 = 4; i_7 < 9; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                for (short i_9 = 2; i_9 < 8; i_9 += 1) 
                {
                    {
                        var_21 = min(((+(-91759335229065510LL))), (min((((/* implicit */long long int) var_4)), (2357848578197192659LL))));
                        var_22 = ((/* implicit */_Bool) var_6);
                        arr_30 [i_3] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 1] = ((/* implicit */unsigned int) ((long long int) ((_Bool) arr_5 [i_9] [i_9 + 2] [i_3 - 2] [i_3 - 2])));
                        var_23 = ((/* implicit */long long int) (unsigned short)4980);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */short) min((((((((/* implicit */_Bool) (unsigned short)4970)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_19 [i_3] [i_3 - 1]))) | (((long long int) -91759335229065512LL)))), (min((((/* implicit */long long int) (unsigned short)60578)), (min((-91759335229065510LL), (((/* implicit */long long int) (unsigned short)24674))))))));
    }
    for (short i_10 = 0; i_10 < 12; i_10 += 3) 
    {
        arr_35 [i_10] = ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60565)))))) - (((((/* implicit */long long int) 2147483648U)) ^ (var_2))))) | (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_10] [i_10] [i_10])) & (((/* implicit */int) var_0))))));
        var_25 = ((/* implicit */signed char) ((short) (+(var_5))));
        var_26 = ((/* implicit */short) min((((((/* implicit */_Bool) var_0)) ? (((long long int) var_1)) : (((var_1) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60578))))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_10] [i_10] [i_10])))))));
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
        {
            for (unsigned short i_12 = 1; i_12 < 9; i_12 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) min((var_9), (((/* implicit */short) var_7))))), ((unsigned short)24674)))) >> (((((((/* implicit */int) var_6)) << (((int) var_7)))) - (35902)))));
                    arr_42 [i_10] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)4974)) & (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_9)))))))), (max((-2357848578197192660LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_10] [i_10])) : (((/* implicit */int) var_7)))))))));
                }
            } 
        } 
    }
}
