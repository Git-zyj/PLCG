/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187951
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
    var_13 = ((/* implicit */signed char) var_0);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = (_Bool)1;
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(-1LL)));
                }
            } 
        } 
        var_15 = ((/* implicit */int) var_0);
        var_16 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])), (2ULL))), (((/* implicit */unsigned long long int) (_Bool)1))));
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) (signed char)-110);
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
            {
                {
                    var_18 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_5] [i_4] [i_3])) ? (((long long int) (short)19228)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)109)))))), (2ULL));
                    var_19 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)19221))))));
                    var_20 = ((/* implicit */unsigned char) (+(max((14954116289001932666ULL), (min((9007199254740990ULL), (((/* implicit */unsigned long long int) (short)-19222))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 13; i_6 += 4) 
        {
            for (signed char i_7 = 4; i_7 < 15; i_7 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) min(((unsigned char)192), (((/* implicit */unsigned char) (signed char)1))));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (16715366380816702877ULL) : (1196760049999034064ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-12)), (16715366380816702877ULL))))))) : (((/* implicit */int) (!((((_Bool)1) || (((/* implicit */_Bool) var_2))))))))))));
                    var_23 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned long long int) (signed char)33);
    var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
}
