/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((var_7 != var_7) ? var_14 : (min(14336, 137438953472)))), -var_1));
    var_20 = var_14;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((((((794383972 ^ 4157655725) ? ((3500583324 ? 134217727 : 104)) : (arr_1 [i_0])))) ? (max(((-27 ? 5856704390166528181 : 123)), (((-27 ? -3804806500913543196 : 241))))) : ((min(((var_17 ? var_14 : 109)), -28106)))));
        var_21 = (min((arr_3 [i_0] [i_0]), (arr_2 [i_0])));
        var_22 = (max(var_22, ((min(((-(arr_0 [13] [i_0]))), (((!(((var_3 ? var_1 : 499)))))))))));
        arr_5 [13] [13] = ((((((var_12 || var_3) ? var_6 : (arr_3 [i_0] [i_0])))) ? ((1833670262183065828 ? (min(91, 0)) : (((428419445 ? var_12 : (arr_1 [i_0])))))) : var_13));
        var_23 = (max(var_23, var_8));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            arr_12 [i_1] = ((-var_18 >= (112 && 541755985724367761)));
            arr_13 [i_1] [i_1] = (max((var_15 == var_18), (max(4909684731780297806, (((var_12 ? 794383972 : var_12)))))));
            arr_14 [i_1] = (min(3500583323, 9007199254740991));
            var_24 = (max(var_24, var_6));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            arr_17 [13] [i_1] [i_3] = (min(-2736846050, (min((arr_9 [i_1] [i_1 + 1] [i_3]), (arr_9 [i_1] [i_1 - 2] [i_1 - 2])))));
            arr_18 [16] [i_1] [i_3] = (65424 || 85);
        }
        var_25 |= ((var_18 ? 0 : ((224 ? var_14 : ((var_14 ? var_1 : (arr_11 [16])))))));
        arr_19 [i_1] [i_1] = (((((((0 ? 43181 : 434524286163794467))) ? 171 : var_2)) % (max((var_17 && var_0), var_11))));
        arr_20 [10] |= (arr_10 [i_1] [i_1 - 2]);
    }
    for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_23 [i_4] [i_4 - 2] |= ((-(min((!var_10), ((-434524286163794460 ? 27 : 67))))));
        var_26 = (min(var_26, var_0));
        arr_24 [i_4] = (arr_6 [i_4]);
        var_27 = (max(var_27, ((((arr_22 [i_4]) ? ((6929547758394676585 ? 111 : 32512)) : var_0)))));
        var_28 = (min(var_28, (min((min(111, (arr_22 [i_4 - 1]))), ((var_14 ? ((5363423069816493603 ? 2 : 3243315435)) : 1065353216))))));
    }
    #pragma endscop
}
