/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149530
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
    var_10 += ((/* implicit */long long int) var_0);
    var_11 += ((/* implicit */unsigned char) var_4);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        var_12 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0 - 3]))))), (var_2)));
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 13077389741026761483ULL)) ? (min((2251799812636672LL), (arr_0 [i_0 - 4] [i_0 - 4]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))) / (((/* implicit */long long int) ((/* implicit */int) (((~(var_4))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((((/* implicit */int) (unsigned short)64771)) - (64761)))))))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 20; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) (+(-5569749652896086540LL)));
        arr_4 [i_1 - 3] = ((/* implicit */_Bool) (+(arr_2 [i_1 - 2])));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] = max((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_6 [i_2]))))) + (((((/* implicit */unsigned long long int) 1506820542)) - (5369354332682790133ULL))))), (((/* implicit */unsigned long long int) arr_7 [i_2])));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((unsigned long long int) var_3)))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_16 *= var_2;
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)64765)) % (((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2])) & (((/* implicit */int) (_Bool)0))))) : ((~(13077389741026761467ULL)))));
                                var_18 = (-(max((((/* implicit */unsigned long long int) arr_19 [i_2] [i_2] [i_4] [i_5] [i_4])), (arr_13 [i_2] [i_4] [i_5] [i_6]))));
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */int) arr_12 [i_4] [(_Bool)1] [(_Bool)1])) : (-877458321))) != (((/* implicit */int) arr_7 [i_2]))))) | (((/* implicit */int) max(((unsigned short)54737), ((unsigned short)10798))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) (+(((var_6) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))) : (max((-489285080836554180LL), (((/* implicit */long long int) var_8))))))));
                    var_21 -= ((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) > (var_9))) ? (((/* implicit */int) min(((unsigned short)32413), (((/* implicit */unsigned short) var_1))))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_2])), (arr_12 [i_4] [i_3] [i_2]))))))) < (arr_13 [(_Bool)1] [(_Bool)1] [11] [(_Bool)1]));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            {
                var_22 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_7] [i_8] [i_7]))))), (((((/* implicit */_Bool) -7135505401347323722LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7]))) : (13077389741026761483ULL))))), (((/* implicit */unsigned long long int) arr_5 [(unsigned short)16]))));
                var_23 = ((/* implicit */long long int) 1006873804408942943ULL);
                var_24 = ((/* implicit */unsigned short) var_4);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((((max((((/* implicit */unsigned long long int) var_9)), (var_4))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((min((2917964026541556183LL), (((/* implicit */long long int) var_5)))) <= (((((/* implicit */long long int) ((/* implicit */int) var_0))) & (-9223372036854775794LL))))))) : ((-(var_9)))));
}
