/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128712
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
    var_15 = ((/* implicit */unsigned short) ((((var_10) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (+(var_4)))) ? (var_2) : ((+(var_7))))) - (419627846357976651LL)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_16 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)14722))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24)))))) : (arr_1 [i_0]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [(unsigned short)12] [i_0] [i_2] [11LL] = ((/* implicit */unsigned short) ((((((var_2) ^ (((-2592647182885036610LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4838))))))) + (9223372036854775807LL))) >> ((((~(((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))))) + (6085338619481245503LL)))));
                    var_17 = ((/* implicit */long long int) arr_4 [i_0] [i_1] [(unsigned short)16] [7LL]);
                    var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)6693)) ? (((/* implicit */int) (unsigned short)4312)) : (((/* implicit */int) (unsigned short)4838)))) << ((((+(((/* implicit */int) var_8)))) - (2832)))));
                }
            } 
        } 
        var_19 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_0] [17LL] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [(unsigned short)8] [i_0] [(unsigned short)4])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [4LL] [i_0]))))) : (max((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0] [(unsigned short)5])), (arr_3 [i_0] [i_0])))))) ? (-4953288746783048987LL) : (max((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0])), (((8082307267511656283LL) ^ (2592647182885036609LL))))));
        var_20 = min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_11))), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_5 [17LL] [i_0] [10LL] [i_0])) ? (((/* implicit */int) (unsigned short)32614)) : (((/* implicit */int) (unsigned short)32614)))), ((~(((/* implicit */int) (unsigned short)10434))))))));
    }
    var_21 = ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_8))))) : (var_14))) ^ (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)61224)) | (((/* implicit */int) (unsigned short)63130))))), (min((-9129818914662364659LL), (2251799813685184LL))))));
    var_22 = var_12;
}
