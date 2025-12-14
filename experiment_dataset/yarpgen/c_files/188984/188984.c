/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_14 = (max((((((((arr_2 [9]) == (arr_2 [10]))))) | (arr_2 [i_0 + 1]))), (arr_0 [i_0 - 1] [i_0 + 1])));
        arr_3 [i_0] = ((((-((~(arr_2 [i_0])))))) ? (max((arr_1 [i_0 - 1] [i_0 - 1]), (arr_2 [6]))) : var_6);
        var_15 = (((((((max(1222090548, 2643353973790068608)) == (((arr_0 [i_0] [9]) ? var_0 : -1115281679971116337)))))) >= (((((~(arr_0 [i_0] [i_0])))) ? 16777088 : (arr_2 [i_0 + 4])))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_16 = (max((((arr_6 [i_1]) ? (min((arr_6 [i_1]), (arr_4 [i_1] [i_1]))) : (((arr_5 [i_1] [i_1]) ? 4862155079959481913 : (arr_5 [i_1] [i_1]))))), ((((arr_6 [i_1]) | ((4862155079959481912 ? 3098610554 : 21586)))))));
        var_17 = (max(var_17, (-1115281679971116337 >= 4611686018427387904)));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_9 [i_1] = ((((+((2147483632 ? (arr_6 [i_1]) : 12496500388640780882)))) >= (((((((arr_5 [i_1] [i_1]) == var_4))) << (((arr_4 [i_1] [i_1]) - 9206380423174736358)))))));
            var_18 = (max((arr_7 [i_1] [i_2] [i_1]), ((61523018 ? (((0 >> (-4862155079959481913 + 4862155079959481917)))) : (min((-9223372036854775807 - 1), var_3))))));
        }
        var_19 ^= ((19233 << (4825 - 4823)));
    }
    var_20 = ((!(~var_7)));
    var_21 = var_5;
    #pragma endscop
}
