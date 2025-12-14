/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142581
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
    var_17 = min((var_14), (((((/* implicit */_Bool) var_16)) ? ((~(9274897467502666162ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 9307741230954688950ULL)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_18 = 4323455642275676160ULL;
        var_19 = var_1;
        var_20 |= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 571957152676052992ULL)) ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? (((17874786921033498631ULL) | (var_7))) : (min((571957152676052984ULL), (var_3))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_0 [i_0]) != (70368743129088ULL))))))));
        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((((/* implicit */_Bool) var_15)) ? (var_1) : (arr_3 [11ULL]))) : ((~(var_5)))))) ? (((unsigned long long int) arr_0 [i_0])) : (min((min((var_5), (17874786921033498620ULL))), ((~(arr_1 [i_0]))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        var_22 = (+(arr_5 [i_1]));
        arr_6 [i_1 - 1] [i_1] = ((arr_5 [i_1 + 1]) >> (((((unsigned long long int) 1469789884160372522ULL)) - (1469789884160372510ULL))));
        arr_7 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) != (17592186044415ULL))))) * (min((arr_4 [i_1]), (var_15)))))) ? (((((/* implicit */_Bool) min((11806172645579004651ULL), (18446744073709551604ULL)))) ? (var_10) : (min((6027276690673091677ULL), (571957152676052963ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5560933803973903372ULL)) ? (arr_5 [i_1]) : (16311036315324606851ULL)))) ? (((12885810269735648233ULL) % (18446726481523507204ULL))) : (((((/* implicit */_Bool) 5560933803973903372ULL)) ? (arr_4 [14ULL]) : (12827728310489745431ULL))))));
        arr_8 [6ULL] = ((((/* implicit */_Bool) var_7)) ? (((arr_4 [i_1 + 2]) & (571957152676052992ULL))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 1768855524112195918ULL)) ? (17592186044422ULL) : (arr_5 [i_1]))) : (min((arr_4 [i_1 + 2]), (var_3))))));
        var_23 |= min((arr_4 [i_1]), (((/* implicit */unsigned long long int) ((arr_5 [i_1 + 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [14ULL]) > (var_4)))))))));
    }
    var_24 = (+(((min((9914442144024743733ULL), (var_13))) * (((unsigned long long int) 0ULL)))));
    var_25 = var_5;
    var_26 = 1768855524112195918ULL;
}
