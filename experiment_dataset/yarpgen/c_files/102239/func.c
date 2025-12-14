/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102239
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((_Bool) var_3)))));
    var_20 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_21 = ((/* implicit */short) max((var_21), (min((((short) (short)-11309)), ((short)28841)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_22 += var_18;
                                var_23 += ((/* implicit */unsigned char) (short)-28846);
                                arr_12 [11LL] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) (short)-28838));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    arr_15 [i_1] [(unsigned char)17] = var_10;
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_18))));
                }
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (_Bool)1))));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_1))) ? (max((-1347916631269684086LL), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)28866)) : (((/* implicit */int) (unsigned char)216))))))))));
                }
                arr_19 [i_1] [(unsigned char)18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)211)) ? (7020762178058431751LL) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((_Bool) 4294967288U)))));
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) var_11);
    /* LoopNest 3 */
    for (unsigned char i_7 = 3; i_7 < 15; i_7 += 3) 
    {
        for (short i_8 = 2; i_8 < 15; i_8 += 2) 
        {
            for (unsigned char i_9 = 1; i_9 < 15; i_9 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (8ULL)))) ? (((/* implicit */long long int) ((var_11) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) var_15))))) : (1284919225569768233LL)));
                        var_29 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)98))))), (((((/* implicit */_Bool) 14U)) ? (15427995893122217653ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32763)))))));
                        var_30 = ((/* implicit */_Bool) var_5);
                    }
                    var_31 = ((/* implicit */unsigned int) ((max(((_Bool)1), (var_15))) ? (((((/* implicit */_Bool) (short)-27431)) ? (7015263443241038092ULL) : (((/* implicit */unsigned long long int) 3136486618U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)206)), (var_9)))))));
                    var_32 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)36));
                }
            } 
        } 
    } 
}
