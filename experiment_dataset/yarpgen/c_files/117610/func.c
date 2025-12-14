/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117610
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
    var_12 = ((/* implicit */long long int) min((((short) var_8)), (((/* implicit */short) ((_Bool) max((((/* implicit */unsigned long long int) 259059283)), (10307530527897736878ULL)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0] [i_0];
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)57))))), (max((((/* implicit */unsigned long long int) -9223372036854775797LL)), (((((/* implicit */_Bool) 4588479445673712317ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [4ULL] [i_0]))) : (var_8)))))));
        var_13 = ((/* implicit */unsigned char) min((((max(((_Bool)1), (arr_0 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (10573374255570271749ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4194303ULL)) ? ((-(var_11))) : (((/* implicit */int) (unsigned short)20166)))))));
        var_14 = ((/* implicit */signed char) arr_1 [i_0]);
    }
    var_15 ^= ((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (13077227563708758710ULL)))))));
    var_16 = (+(var_8));
    var_17 = ((/* implicit */int) ((((_Bool) max((((/* implicit */long long int) var_5)), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11087476459199184331ULL)) ? (((/* implicit */int) (short)20816)) : (((/* implicit */int) (_Bool)0))))))))) : (max((((/* implicit */unsigned long long int) (signed char)27)), ((((_Bool)0) ? (((/* implicit */unsigned long long int) var_10)) : (7374173708389360712ULL)))))));
}
