/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161976
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
    var_18 *= ((/* implicit */long long int) var_2);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            arr_6 [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -8959429381028670121LL)) ^ ((~((~(1758318000649718044ULL)))))));
            var_19 = ((/* implicit */unsigned long long int) ((int) (-(min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_17))))));
            arr_7 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 224341524)), (1758318000649718034ULL)))) ? (2142484439955647620LL) : (-2142484439955647599LL))) >> (((((((((/* implicit */_Bool) var_8)) ? (18425863039322168463ULL) : (((/* implicit */unsigned long long int) -9118127998632702036LL)))) | (var_17))) - (18446738504678211445ULL)))));
        }
        for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_20 ^= ((/* implicit */unsigned int) ((int) 224341524));
            var_21 = ((((((/* implicit */_Bool) arr_2 [i_2])) || (((/* implicit */_Bool) arr_5 [i_0] [i_2])))) ? (((((/* implicit */_Bool) ((arr_4 [i_0] [i_2] [i_2]) + (arr_0 [(_Bool)1] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((arr_9 [i_0]) + (var_6))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-106))));
        }
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(2142484439955647629LL))) | (((/* implicit */long long int) -224341524))))) ? (((/* implicit */int) var_11)) : ((-(((/* implicit */int) arr_5 [i_0] [i_0]))))));
    }
    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) min((((long long int) 1758318000649718041ULL)), (((long long int) arr_8 [i_3] [i_3] [i_3]))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(683014562101487776LL)))) ? ((~(max((((/* implicit */long long int) arr_11 [12ULL])), (455347563406290854LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 16688426073059833586ULL)))))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_23 [i_5] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((unsigned int) (+(arr_13 [i_3] [i_4]))));
                        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) 14056276306658961710ULL)))));
                    }
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        arr_26 [i_3] [i_3] [i_4] [23U] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (min((11ULL), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 0U)))))) : (((((/* implicit */_Bool) arr_24 [i_5] [i_5])) ? (((/* implicit */int) (short)18736)) : (arr_22 [i_7] [i_7] [i_7] [i_7])))));
                        arr_27 [(_Bool)1] [i_5] [i_5] [i_7] = ((/* implicit */_Bool) var_11);
                        var_26 = ((/* implicit */long long int) (~(((arr_20 [i_3] [i_4] [i_3]) + (((/* implicit */unsigned long long int) var_9))))));
                    }
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_12))))))) != (arr_20 [i_3] [i_3] [i_8]))))));
                        arr_30 [i_5] [i_5] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_3 [i_5] [i_4])) ? (((/* implicit */int) arr_3 [i_5] [i_5])) : (((/* implicit */int) arr_3 [i_5] [i_4]))))));
                        arr_31 [i_3] [i_5] [i_5] [21ULL] = (~(((arr_12 [i_4]) & (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 2142484439955647610LL)))))));
                    }
                }
            } 
        } 
    }
    for (long long int i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
    {
        arr_36 [i_9] [i_9] = ((/* implicit */long long int) arr_18 [i_9] [20LL] [i_9] [i_9]);
        var_28 = ((/* implicit */signed char) (~(18425863039322168454ULL)));
        arr_37 [i_9] = ((max((2142484439955647620LL), (min((-2142484439955647618LL), (-2142484439955647610LL))))) ^ (arr_28 [i_9] [i_9] [i_9]));
        var_29 ^= ((/* implicit */_Bool) var_10);
    }
    var_30 &= max((((/* implicit */unsigned long long int) 3534768947738435527LL)), (18425863039322168463ULL));
    var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
}
