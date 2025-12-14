/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17710
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)0)), (3654597215871894832LL)))) * ((((~(6678500989008597923ULL))) & (((/* implicit */unsigned long long int) -921172868))))));
    var_11 = ((short) var_9);
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 8; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((-1805516072) > (((/* implicit */int) var_9))));
                    arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(-1805516067)))), (max((var_2), (((/* implicit */long long int) var_1))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 1805516076)), (max((var_2), (((/* implicit */long long int) (_Bool)1))))))) : (((min((((/* implicit */unsigned long long int) var_9)), (6678500989008597923ULL))) / ((+(arr_2 [i_0])))))));
                    var_13 = ((/* implicit */unsigned int) max((-6223898882760165294LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0 + 2] [i_0 + 1])))))));
                }
            } 
        } 
        var_14 = 5283243326029542342LL;
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((13231993849960669220ULL) == (((/* implicit */unsigned long long int) 6223898882760165294LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39713)) ? (((/* implicit */unsigned int) 32767)) : (4294967295U))))))) << (((((((/* implicit */_Bool) var_3)) ? (((var_5) / (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))) - (4436916079ULL)))));
        arr_9 [i_0] [8] = ((/* implicit */signed char) arr_3 [i_0] [i_0] [8ULL]);
    }
    for (int i_3 = 1; i_3 < 8; i_3 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(3994229441U)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)116))) : (arr_5 [i_3] [(_Bool)0]))) ^ (((504403158265495552LL) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-69)) || (((/* implicit */_Bool) var_2)))))))))))));
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (+(10U))))));
    }
    for (int i_4 = 1; i_4 < 8; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            var_18 &= ((/* implicit */short) arr_18 [i_4] [9ULL]);
            arr_19 [i_4] [i_5] = min((((/* implicit */unsigned int) max((var_7), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3998932715033858890ULL)))))))), (min((var_3), (((/* implicit */unsigned int) ((var_0) == (((/* implicit */long long int) 32780))))))));
        }
        arr_20 [5LL] = ((long long int) (~(((/* implicit */int) arr_1 [i_4 + 3]))));
        var_19 = ((/* implicit */signed char) arr_4 [3ULL] [i_4] [i_4]);
    }
    var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((unsigned short) 32753))) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) -32759)) * (2064384ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
}
