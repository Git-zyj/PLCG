/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18899
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (var_7)))))));
    var_18 = ((/* implicit */_Bool) var_10);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 *= ((/* implicit */unsigned int) arr_8 [i_0] [(unsigned char)10] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_20 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) | (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)15]))) / (arr_4 [11ULL] [i_3] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)195))))))));
                                var_21 = ((_Bool) ((((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_1])))) - (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) (unsigned short)56006))))));
                                var_22 = ((/* implicit */unsigned long long int) (unsigned char)60);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_23 = ((((((/* implicit */_Bool) ((2300416848U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))) ? (arr_7 [i_1] [i_1 - 2] [i_1]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)29434))) | (13387398596167400029ULL))))) >> (((((/* implicit */int) arr_14 [i_1] [i_2] [i_2] [i_0] [i_1])) - (140))));
                                var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [(signed char)9])) & (((/* implicit */int) (_Bool)0))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_1])) <= (((/* implicit */int) var_16)))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9527)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) (signed char)2);
    var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-45)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_16)))))) == (var_7)));
}
