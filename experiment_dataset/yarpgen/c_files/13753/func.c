/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13753
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
    var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_11)) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24757))) : (-6931501959045507990LL))))) < (max((((/* implicit */long long int) ((((/* implicit */_Bool) 1254133066U)) && (((/* implicit */_Bool) var_6))))), ((+(6423301657839822148LL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) 15463057966364308194ULL);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_14 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -6931501959045507990LL)) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) (signed char)101))))) | (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_13 [i_3])))));
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 1) 
                        {
                            arr_17 [i_3] [i_0] = ((/* implicit */unsigned int) var_3);
                            arr_18 [i_0] [i_1] [i_4] [i_3] [i_0] &= ((/* implicit */unsigned long long int) (((+(var_7))) ^ (((int) var_0))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 4) 
                        {
                            arr_23 [(short)0] [i_0] [12U] [i_0] [12U] [9ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118)))))) ? (549138505) : (((int) arr_12 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1]))));
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (arr_11 [i_0] [i_3] [i_3] [i_3] [i_0])));
                            var_16 = ((((((/* implicit */_Bool) 193247529U)) || (((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) var_13)));
                        }
                        for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            arr_26 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -6931501959045507991LL)) + (0ULL)));
                            var_17 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_5)) ? (arr_11 [i_0] [i_3] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_2] [i_3] [i_6]))))));
                        }
                        for (short i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) 3185790620U));
                            arr_30 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 6931501959045507989LL)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32748))))));
                            arr_31 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (~(-6931501959045507981LL)));
                        }
                    }
                } 
            } 
        } 
        arr_32 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) % (((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) (short)7928)) : (((/* implicit */int) var_13))))));
    }
    for (int i_8 = 1; i_8 < 17; i_8 += 3) 
    {
        arr_35 [i_8] = ((/* implicit */_Bool) (+(((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */int) (signed char)0)))))));
        arr_36 [i_8] = ((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)15615)) - (((/* implicit */int) (_Bool)1)))));
        var_18 += ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (var_7)))) ^ ((+(arr_34 [i_8 + 2])))));
    }
}
