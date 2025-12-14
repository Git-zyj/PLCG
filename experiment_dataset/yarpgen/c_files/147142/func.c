/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147142
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
    var_17 ^= (unsigned short)46817;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)46817)) ? (((/* implicit */int) (unsigned short)26637)) : (((/* implicit */int) (unsigned short)18706))));
                arr_5 [i_1] [(_Bool)1] [i_1] = ((((((/* implicit */int) (unsigned short)46817)) + (((/* implicit */int) arr_0 [i_0])))) / (((/* implicit */int) max(((unsigned short)46834), (((/* implicit */unsigned short) (signed char)-6))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (-((((!(((/* implicit */_Bool) 2117523301610564077ULL)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (-2111094452) : (((/* implicit */int) (short)-31201)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 16329220772098987525ULL)) ? (((/* implicit */unsigned int) -1206957044)) : (((((/* implicit */_Bool) -383916418)) ? (max((((/* implicit */unsigned int) -1075423137)), (1576009022U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)1685)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-8192)))))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)1)), (3557194997175674266ULL)));
}
