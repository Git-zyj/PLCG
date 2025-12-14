/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184162
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) max((((16206503348197173164ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))), (((/* implicit */unsigned long long int) min((2310691649U), (((/* implicit */unsigned int) -1250220773))))))))));
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (var_0)))) : ((+(var_6))))), (((((((/* implicit */unsigned int) -2129680850)) * (545024500U))) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (545024500U))))))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0 + 1] |= ((/* implicit */int) min(((-((+(17284302686831403432ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) 11101931080884039222ULL))))), (var_0))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_0 + 1] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */int) (_Bool)1);
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) max((-954835287), (((/* implicit */int) (short)769))))) ? (((/* implicit */unsigned long long int) var_2)) : (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1250220773)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                                var_17 = ((/* implicit */short) min((var_17), (max(((short)-17624), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)769)) : (((/* implicit */int) (short)31))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)-26984))))))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_3))));
                    arr_15 [i_0 - 1] [i_2] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (var_5))), (-1))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 16; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (unsigned int i_7 = 2; i_7 < 17; i_7 += 1) 
            {
                {
                    arr_25 [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_7] [i_5]))))), (((/* implicit */unsigned long long int) max((var_13), ((_Bool)1))))))) ? (min((max((arr_1 [i_7]), (15320958237575209152ULL))), (((/* implicit */unsigned long long int) ((((var_1) + (2147483647))) >> (((4194303ULL) - (4194276ULL)))))))) : (((/* implicit */unsigned long long int) -724046981))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            {
                                var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -724046981)) ? (arr_26 [i_6] [i_6] [i_6] [i_9] [i_9] [(short)7]) : (arr_26 [i_9] [i_8] [i_6] [3U] [i_6] [i_5])))) ? (min((var_7), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 386259112U)) ? (((/* implicit */int) (short)(-32767 - 1))) : ((-2147483647 - 1))))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (var_11)))) : (min((var_12), (((/* implicit */unsigned long long int) arr_27 [i_9] [7]))))))) || ((((_Bool)1) && (((/* implicit */_Bool) 3908708173U)))))))));
                                arr_30 [i_5] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 954601839)))) ? (max((((/* implicit */unsigned long long int) 861238649U)), (max((17284302686831403432ULL), (((/* implicit */unsigned long long int) -137959240)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((_Bool) (_Bool)1))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) ((short) 1215542457))) == (((/* implicit */int) (!(((/* implicit */_Bool) 1215542457)))))))), ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-6856)) : (((/* implicit */int) (_Bool)1)))))))))));
                                var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) -762177215)) : (((unsigned int) (!(((/* implicit */_Bool) var_5)))))));
                                arr_36 [i_11] [i_5] = ((/* implicit */_Bool) max((((unsigned long long int) ((arr_7 [i_5] [i_5]) ? (((/* implicit */int) (short)23914)) : (var_2)))), (((/* implicit */unsigned long long int) (_Bool)0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
