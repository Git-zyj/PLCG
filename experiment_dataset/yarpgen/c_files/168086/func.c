/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168086
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
    var_18 = ((/* implicit */int) (+(min((((var_8) & (4948630361791424025ULL))), (((/* implicit */unsigned long long int) ((var_2) ^ (var_2))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) 5403471690895062524ULL))))), (max(((unsigned short)16384), (((/* implicit */unsigned short) var_17)))))))));
        var_20 &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_2 [i_0 + 1])) % (((/* implicit */int) var_4))))))), ((+(13438285961805591781ULL)))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)62)) || (var_14))), ((!(((/* implicit */_Bool) var_8))))))) <= (min(((+(((/* implicit */int) (unsigned char)0)))), (((((/* implicit */int) arr_0 [i_0 - 1])) ^ (((/* implicit */int) var_6))))))));
        var_21 *= ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0 + 1]))))), ((~(var_3))))), (((/* implicit */long long int) ((3551428963U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))) < (8529115563456332893LL))))))))));
        var_22 = ((((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (arr_0 [i_0]))))))) & (((max((((/* implicit */long long int) 3073691387U)), (8529115563456332889LL))) >> (((/* implicit */int) ((var_8) == (((/* implicit */unsigned long long int) -111334807))))))));
    }
    var_23 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)79)), (var_1))))))), ((~((+(var_16)))))));
    var_24 *= ((/* implicit */unsigned int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) 1099494850560LL))))))) != ((-(((((/* implicit */int) (short)-12710)) | (((/* implicit */int) var_7))))))));
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) arr_4 [i_1])), (var_8)))))) || (((max((((/* implicit */unsigned long long int) var_4)), (var_16))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((-1099494850561LL) + (1099494850579LL))))))))));
        var_25 = ((/* implicit */long long int) max(((+(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_13))))))), ((-((-(((/* implicit */int) var_12))))))));
        arr_7 [i_1] = max(((short)255), (((/* implicit */short) (unsigned char)146)));
    }
}
