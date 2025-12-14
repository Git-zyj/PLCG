/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127255
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) (signed char)-86)) ? (arr_5 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45433))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)0))))))));
                    var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)45433))));
                }
            } 
        } 
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))), (4250800785504210266ULL)))) ? (((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)24231))))) : ((~(((/* implicit */int) var_9))))));
        var_15 = ((/* implicit */unsigned long long int) var_1);
    }
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) 14195943288205341352ULL);
        arr_11 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (-208811035) : (((/* implicit */int) arr_10 [i_3]))))) ? (max((((/* implicit */unsigned long long int) (!((_Bool)1)))), (var_11))) : (((((14195943288205341352ULL) >= (((/* implicit */unsigned long long int) -9023336938717657707LL)))) ? (((unsigned long long int) var_0)) : ((-(1594214162256933996ULL)))))));
    }
    for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        arr_14 [i_4] = ((/* implicit */_Bool) 208811034);
        var_17 = ((/* implicit */unsigned int) (signed char)-83);
    }
    var_18 = ((/* implicit */signed char) var_1);
    var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_6)), (var_12))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 765391599369149651ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) : (-8352232611438575202LL))) : (((var_7) ? (9023336938717657720LL) : (2144854861898892747LL)))))))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 2; i_5 < 21; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            {
                arr_19 [i_6] = (+(max((((/* implicit */unsigned long long int) (+(3348308306U)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26114))) : (var_11))))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned short)20103), (((/* implicit */unsigned short) (signed char)-91))))) > (((/* implicit */int) var_8))));
                arr_20 [i_5 - 1] [i_5 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && ((_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 8352232611438575201LL)))))))) ^ (4250800785504210263ULL)));
            }
        } 
    } 
}
