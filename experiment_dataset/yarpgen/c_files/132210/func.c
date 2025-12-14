/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132210
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
    var_20 &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)164)) * ((~(((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) (~(13916506970047557674ULL)));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (short)0))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 105867634U)) + (7007537337573620502ULL)));
        }
        var_24 += ((/* implicit */unsigned long long int) (~(4119198733U)));
    }
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
            var_26 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [i_2] [i_2]))));
            var_27 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 4257811659U)), ((~((+(4650771181371792994ULL)))))));
        }
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-32)))))));
        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (~(min((7007537337573620502ULL), (4530237103661993942ULL))))))));
    }
    var_30 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)212))));
}
