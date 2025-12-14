/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174005
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((int) arr_0 [i_0]);
    }
    for (unsigned char i_1 = 3; i_1 < 11; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 4; i_2 < 9; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_8 [i_3 + 2] [i_3] [i_3 + 1] [i_3])))) * (((/* implicit */int) ((unsigned char) -640843761)))));
                    var_15 = ((/* implicit */int) max((var_15), (-640843763)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 2; i_6 < 10; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((var_7) + (6172966522471785863LL))))))));
                        arr_16 [i_6] [i_4] = ((/* implicit */unsigned char) (~(max((((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4]))))), (((unsigned int) 281474976709632LL))))));
                    }
                    var_17 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_1 - 1]) : (var_10))));
                }
            } 
        } 
    }
    for (unsigned char i_7 = 3; i_7 < 11; i_7 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) arr_10 [i_7] [i_7]))));
        var_19 = ((/* implicit */_Bool) max((((min((arr_7 [i_7] [i_7 - 2]), (((/* implicit */long long int) var_8)))) >> (((((/* implicit */_Bool) arr_17 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_7))))), (((/* implicit */long long int) (-(max((arr_18 [i_7] [i_7]), (((/* implicit */int) arr_15 [i_7] [10ULL] [i_7] [6ULL])))))))));
        var_20 ^= min((((/* implicit */long long int) (_Bool)1)), (4533363618428824146LL));
    }
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)222)) >> (((-809199197) + (809199222))))) >> (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-6494608779480773886LL))) != (((long long int) 567345184)))))));
    /* LoopSeq 1 */
    for (unsigned int i_8 = 1; i_8 < 19; i_8 += 2) 
    {
        var_22 = ((/* implicit */short) (+((~(min((6494608779480773892LL), (((/* implicit */long long int) (unsigned char)7))))))));
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((var_3) ? (((/* implicit */unsigned long long int) ((((long long int) arr_1 [(_Bool)1] [i_8])) << (((((var_5) << (((var_5) - (17956639318434073433ULL))))) - (5561395783988674552ULL)))))) : (max((((((/* implicit */_Bool) arr_1 [(unsigned short)14] [i_8])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) arr_21 [i_8 + 3])))))))));
        arr_23 [i_8] [(unsigned char)1] = ((/* implicit */signed char) (~(min((var_11), (arr_2 [i_8 + 3])))));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            var_24 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((-640843761) + (2147483647))) >> (((/* implicit */int) (unsigned char)0))))) ? ((+(1533372353))) : (var_11)))));
            arr_27 [12] [(unsigned char)4] &= var_6;
        }
    }
    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)157))))) ? (var_11) : (((/* implicit */int) (unsigned char)71))))) + (var_4))))));
    var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) 9077308234717977044LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222))) : (((unsigned long long int) (_Bool)1)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / ((((_Bool)1) ? (((/* implicit */unsigned long long int) 640843760)) : (8823920004438546183ULL)))))));
}
