/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151194
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
    var_19 = ((/* implicit */unsigned char) (-((+(min((((/* implicit */unsigned long long int) (unsigned short)4)), (14111256515955154027ULL)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_1))))) / (((((/* implicit */_Bool) 1320881413)) ? (10290268212477744014ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            arr_8 [i_1] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) 2836309188U)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_18)))) | (((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) var_11))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        {
                            var_21 = ((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60415))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((846724194) < (1645467583))))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (-1645467583) : (((((/* implicit */_Bool) var_18)) ? (-1645467583) : (((/* implicit */int) (unsigned short)65535))))));
                        }
                    } 
                } 
            } 
            arr_17 [i_1] [i_1] |= ((/* implicit */short) 0);
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? ((~(549755813824ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
            var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16128))) : (var_7)))) && (((/* implicit */_Bool) (+(var_14)))));
            var_25 = ((/* implicit */_Bool) -1645467603);
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_23 [i_0] [i_0] [i_0] = ((/* implicit */int) (signed char)-89);
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_12))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)59)) : (356774485)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : ((-(var_13))))) : (((/* implicit */unsigned long long int) (+((+(356774485))))))));
        }
        arr_24 [i_0] = (+((-(((/* implicit */int) (signed char)127)))));
    }
    var_27 = ((/* implicit */unsigned short) (_Bool)0);
    var_28 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (signed char)65)) * (((/* implicit */int) (unsigned short)18)))) != (((((/* implicit */int) (short)127)) & (((/* implicit */int) (unsigned char)96)))))) ? (7ULL) : (((/* implicit */unsigned long long int) (~(1231566340))))));
    /* LoopNest 2 */
    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 3; i_9 < 20; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        {
                            arr_38 [i_7 - 1] [i_8] [i_9] [i_7] [i_8] = ((/* implicit */unsigned long long int) var_17);
                            var_29 = ((/* implicit */_Bool) var_0);
                        }
                    } 
                } 
                arr_39 [i_7] = ((/* implicit */short) min((min((((((/* implicit */_Bool) (short)32757)) ? (-1645467583) : (((/* implicit */int) (signed char)-46)))), (min((1204340869), (((/* implicit */int) var_6)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) : (var_16)))))))));
                var_30 = ((/* implicit */long long int) ((((/* implicit */int) (((-(4294967295U))) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157)))))) - ((+(((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (_Bool)1)))))))));
            }
        } 
    } 
}
